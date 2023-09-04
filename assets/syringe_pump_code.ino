#include <AccelStepper.h>

AccelStepper stepper(AccelStepper::DRIVER, 3, 2);

// pins
#define POTENTIOMETER_PIN A0
#define RED_LED_PIN 10
#define GREEN_LED_PIN 11
#define BLUE_LED_PIN 9

#define MOTOR_DIR 2
#define MOTOR_STEP 3

#define BACK_BUTTON 4
#define FORWARD_BUTTON 8
#define TOGGLE_BUTTON 12

#define LIMIT_SWITCH_PIN 13

// in mL/min
#define SYRINGE_VOLUME_ML 20.0
#define SYRINGE_BARREL_LENGTH_MM 70.0

#define THREADED_ROD_PITCH 8.0
#define STEPS_PER_REVOLUTION 200.0
#define MICROSTEPS_PER_STEP 16.0

#define FLOWRATE_ML_PER_MIN 100

long ustepsPerML = (MICROSTEPS_PER_STEP * STEPS_PER_REVOLUTION * SYRINGE_BARREL_LENGTH_MM) / (SYRINGE_VOLUME_ML * THREADED_ROD_PITCH);

long speed = ustepsPerML * FLOWRATE_ML_PER_MIN / 60; // speed, in steps per second, which is what the AccelStepper library uses
long adjustedSpeed = speed;

void setup() {

  // put your setup code here, to run once:
  stepper.setMaxSpeed(3750);

  // steps per second. positive is clockwise.
  stepper.setSpeed(speed);

  // setup potentiometer to set speed
  Serial.begin(9600);

  // Motor pins
  pinMode(MOTOR_DIR, OUTPUT);
  pinMode(MOTOR_STEP, OUTPUT);

  // enable pins as inputs
  // pinMode(POTENTIOMETER_PIN, INPUT);

  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(BLUE_LED_PIN, OUTPUT);
  pinMode(BACK_BUTTON, INPUT_PULLUP);
  pinMode(FORWARD_BUTTON, INPUT_PULLUP);
  pinMode(TOGGLE_BUTTON, INPUT_PULLUP);
  pinMode(LIMIT_SWITCH_PIN, INPUT_PULLUP);
}

int tick = 0;

void loop() {

  // read potentiometer

  tick+=1;
  if (tick % 1000 == 0) {
    tick = 0;
    int potentiometer = analogRead(POTENTIOMETER_PIN);
    double percentage = ((int) 100 * (1023.0 - potentiometer) / 1023.0) / 100.0;
    
    double adjustedSpeedTemp = percentage * speed;

    if (abs(adjustedSpeedTemp - adjustedSpeed) / abs(adjustedSpeed) > .01) {
      Serial.println("Flow Rate: " + String(FLOWRATE_ML_PER_MIN * percentage) + " mL/min");
      adjustedSpeed = adjustedSpeedTemp;      
    }
    
  }  


  // set speed based on potentiometer
  // stepper.setSpeed(speed * percentage);

  bool limitSwitch = false;
  if (digitalRead(LIMIT_SWITCH_PIN) == LOW) {
    colorLED(255, 0, 0);  // turn on limit switch LED
    limitSwitch = true;
  }

  // if paused,
  if (digitalRead(TOGGLE_BUTTON) == HIGH) {
    if (limitSwitch) return;

    // set direction to forward
    digitalWrite(MOTOR_DIR, HIGH);
    stepper.setSpeed(adjustedSpeed);
    stepper.runSpeed();

    colorLED(0, 255, 0);
  } else {
    // paused, turn to yellow
    if (!limitSwitch) colorLED(255, 100, 0);

    bool buttonPressed = digitalRead(BACK_BUTTON) == LOW || digitalRead(FORWARD_BUTTON) == LOW;

    if (buttonPressed) {
      // this may change to potentiometer part
      if (limitSwitch && digitalRead(FORWARD_BUTTON)) return;

      digitalWrite(MOTOR_DIR, digitalRead(BACK_BUTTON) == LOW ? -1 : 1);


      stepper.setSpeed(adjustedSpeed * (digitalRead(BACK_BUTTON) == LOW ? 1 : -1));
      stepper.runSpeed();

      // if set direction doesnt work, negative speed does
    }
  }
}

void colorLED(int red, int green, int blue) {
  analogWrite(RED_LED_PIN, red);
  analogWrite(GREEN_LED_PIN, green);
  analogWrite(BLUE_LED_PIN, blue);
}