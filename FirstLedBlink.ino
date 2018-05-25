
int ledRed=11;
int ledYellow=10;
int ledGreen=9;
int wait=1000;

void setup() {
  
  pinMode(ledRed,OUTPUT);
  pinMode(ledYellow,OUTPUT);
  pinMode(ledGreen,OUTPUT);

}

void loop() {

  digitalWrite(ledRed,HIGH);
  delay(wait * 5);
  digitalWrite(ledRed,LOW);
  digitalWrite(ledYellow,HIGH);
  delay(wait * 2);
  digitalWrite(ledYellow,LOW);
  digitalWrite(ledGreen,HIGH);
  delay(wait * 6);
  digitalWrite(ledGreen,LOW);

}
