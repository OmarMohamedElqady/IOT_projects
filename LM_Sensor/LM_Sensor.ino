int led1 = 2 ;
int led2 = 3 ;
int lm = A1 ;
int buzzer = 4 ;
float vout , temp ;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);  
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  vout = analogRead(lm);
  temp = (vout*500/1023);

if (temp > 80 ){
  digitalWrite(buzzer, HIGH);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
}

else{
  digitalWrite(buzzer, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);

}
  
}
