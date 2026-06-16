void setup() {
  // put your setup code here, to run once:
pinMode(A1,INPUT);
Serial.begin(9600);
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int potVal=analogRead(A1);
Serial.println(potVal);
if(potVal>=500){
  digitalWrite(9,HIGH);
}
else{
  digitalWrite(9,LOW);
}
}
