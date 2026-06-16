#define trig 3
#define echo 4

void setup() {
  // put your setup code here, to run once:
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
pinMode(6, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
long duration=pulseIn(echo,HIGH);
float distance=(duration*0.034)/2;
Serial.println(distance);
delay(100);
if(distance<20){
digitalWrite(6, HIGH);
}
else{
  digitalWrite(6, LOW);

}}