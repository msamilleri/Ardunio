#define buton 8
#define led 10
#define lediki 11
#define leduc 12
int a=0;
int deger=0;
void setup()
{
  Serial.begin(9600);
  pinMode(buton, INPUT);
  pinMode(led, OUTPUT);
  pinMode(lediki, OUTPUT);
  pinMode(leduc, OUTPUT);
  
}

void loop()
{
int durum=digitalRead(buton);
while(durum==HIGH){
  deger++;
  if(durum==LOW){
    digitalWrite(led,LOW);
    digitalWrite(lediki,LOW);
    digitalWrite(leduc,LOW);
    break;
  }

    if(deger==1){
      digitalWrite(led,HIGH);
      delay(1000);
      digitalWrite(led,LOW);
      break;
    }
    if(deger==2){
      digitalWrite(led,HIGH);
      digitalWrite(lediki,HIGH);
      delay(2000);
      digitalWrite(lediki,LOW);
      digitalWrite(led,LOW);
      break;
    }
    if(deger==3){
      digitalWrite(led,HIGH);
      digitalWrite(lediki,HIGH);
      digitalWrite(leduc,HIGH);
      delay(3000);
      digitalWrite(lediki,LOW);
      digitalWrite(led,LOW);
      digitalWrite(leduc,LOW);
      
      break;
    }
}
  
}
