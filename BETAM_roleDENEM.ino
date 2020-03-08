int role_1=4;
int role_2=5;
int role_3=6;
int role_4=7;

void setup() {
  // put your setup code here, to run once:
pinMode(role_1,OUTPUT);
pinMode(role_2,OUTPUT);
pinMode(role_3,OUTPUT);
pinMode(role_4,OUTPUT);
Serial.begin(9600);


}
char text;

void loop() {
  // put your main code here, to run repeatedly:
text=Serial.read();

if(text=='1'){
  digitalWrite(role_1,HIGH);
  digitalWrite(role_2,LOW);
  digitalWrite(role_3,LOW);
  digitalWrite(role_4,LOW);
  
}
if(text=='2'){
  digitalWrite(role_1,LOW);
  digitalWrite(role_2,HIGH);
  digitalWrite(role_3,LOW);
  digitalWrite(role_4,LOW);
  
}
if(text=='3'){
  digitalWrite(role_1,LOW);
  digitalWrite(role_2,LOW);
  digitalWrite(role_3,HIGH);
  digitalWrite(role_4,LOW);
  
}
if(text=='4'){
  digitalWrite(role_1,LOW);
  digitalWrite(role_2,LOW);
  digitalWrite(role_3,LOW);
  digitalWrite(role_4,HIGH);
  
}
if(text=='5'){
  digitalWrite(role_1,LOW);
  
  
}
if(text=='6'){
  digitalWrite(role_2,LOW);
  
  
}

if(text=='7'){
  digitalWrite(role_3,LOW);
  
  
}

if(text=='8'){
  digitalWrite(role_4,LOW);
  
  
}

}
