long Time =0;
int  dist =0;
void setup() {
pinMode(8,1);//for trgg.
pinMode(9,0);//for echo.
pinMode(7,OUTPUT);
Serial.begin(9600);
}

void loop() {
 digitalWrite(8,LOW) ;
delayMicroseconds(2);
 digitalWrite(7,LOW);
 digitalWrite(8,1); 
delayMicroseconds(10);


 digitalWrite(8,LOW);
Time = pulseIn(9,1);
dist = Time/59;
if (dist < 15){
  digitalWrite(7,HIGH); }
Serial.print(dist);
Serial.println("   cm");

}
