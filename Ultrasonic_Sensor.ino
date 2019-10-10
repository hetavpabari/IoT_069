
void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
pinMode(10,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(9,LOW);
delay(10);
digitalWrite(9,HIGH);
delay(10);
digitalWrite(9,LOW);
int duration = pulseIn(10,HIGH);
Serial.print("duration:");
Serial.println(duration);
delay(10);
float cmdist = (duration/29)/2;
Serial.print("cm");
Serial.println(cmdist);
float indist=(duration/74)/2;
Serial.print("inches");
Serial.println(indist);
delay(3000);
}
