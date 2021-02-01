//RGB pines
int red_light=2;
int green_light=3;
int blue_light=4;
//Motor pines
int Motor_front_right=5;
int Motor_front_left=6;
int Motor_back_right=7;
int Motor_back_left=8;
String voice; // control for voice
//HCR-04 pines
int trigPin=9;  
int echoin=10;
//find the distance
long duration;
int distance;
int Distancee;
void setup() {
 Serial.begin(9600); //iletişim ayarı
pinMode(red_light,OUTPUT);
pinMode(green_light,OUTPUT);
pinMode(blue_light,OUTPUT)
pinMode(Motor_front_right,OUTPUT);
pinMode(Motor_front_left,OUTPUT);
pinMode(Motor_back_right,OUTPUT)
pinMode(Motor_back_left,OUTPUT)
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
 
}

void loop() {
  // put your main code here, to run repeatedly:
  Distancee=fiind_distance();
  Serial.print("Distance: ");
Serial.println(distance);



}
void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}
int fiind_distance(){
  digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
return distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
}
