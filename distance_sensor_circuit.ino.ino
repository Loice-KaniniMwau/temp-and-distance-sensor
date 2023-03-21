// C++ code
//
int distanceThreshhold = 0;

int cm = 0;

int setpin = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  cm = 80;
  if (0.01723 * readUltrasonicDistance(7, 6) > 70) {
    digitalWrite(3, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}