int a=0;
void setup() {
 Serial.begin(9600);
 pinMode(8, INPUT);
pinMode(12,OUTPUT);//Red LED
pinMode(13,OUTPUT);//Green LED
}

void loop() {
  
 int tot_slot=3;
  int entry = digitalRead(8);
  int exet= digitalRead(7);
  if(entry == LOW){
  if(a<(tot_slot +1 ))
  {
  a++; delay(750);
  }}
  if(exet == LOW)
  if(a>=0)
  {
  a--;delay(750);
  }
  if(a>=tot_slot)
  {digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  }
  if(a<tot_slot)
  {
    digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  }
  
}
    
