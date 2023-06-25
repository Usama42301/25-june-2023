void setup() {

 
   
   pinMode(A0, INPUT);
   pinMode(0, OUTPUT);
   pinMode(1, OUTPUT);
   pinMode(2, OUTPUT);
  }

void loop() {
  
  int gasSensor;
int gas_value = analogRead(gasSensor);



if(gas_value > HIGH)
{
  tone(0,1000,500);
  digitalWrite(2, HIGH);
  digitalWrite(1,LOW);
  
  
}
else
{
  noTone(0);
  digitalWrite(1,HIGH);
  digitalWrite(2, LOW);
}
delay(200);
  
}