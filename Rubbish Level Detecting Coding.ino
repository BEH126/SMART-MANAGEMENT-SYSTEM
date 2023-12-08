const int trigPin = 3;
const int echoPin = 2;
const int trigPin1 = 6;
const int echoPin1 = 7;
const int green = 4;
const int red = 5;


float duration, cm;
long duration1, cm1;
void setup() {
  Serial.begin(9600); 
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(trigPin1, OUTPUT);
 pinMode(echoPin1, INPUT);
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);

}

void loop() {
 digitalWrite(trigPin, LOW); delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  cm = (duration/2)/30;
 
  digitalWrite(trigPin1, LOW); delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH); delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
 
  duration = pulseIn(echoPin, HIGH);
  cm1 = (duration1/2)/30;
 
  if (cm < 7.5)
 { Serial.print("F");
  delay(20);
  digitalWrite(red, 1);
  delay(0);
  digitalWrite(green, 0);
  delay(0);
  
 }
 else{
  if (cm > 7.5 ) 
  { Serial.print("N");
  delay(20);
  digitalWrite(red, 0);
  delay(0);
  digitalWrite(green, 1);
  delay(0);
  
  
 } 
   
 
 }
 }
 
