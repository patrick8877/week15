const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int analogOutPin = 9; // Analog output pin that the LED is attached to

int sensorValue = 0;        // value read from the pot
int outputValue = 0;
// value output to the PWM (analog out)

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 

  int sensorRead = analogRead(A0);
  if(sensorRead<600)sensorRead=600;
  else if (sensorRead>900)sensorRead=900;
  int outputValue =map(sensorRead,600,900,0,255);
  analogWrite(9,outputValue);
  Serial.println(outputValue);
  delay(200);
};
