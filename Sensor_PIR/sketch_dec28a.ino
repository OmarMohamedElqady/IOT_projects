//senor pir
//int motionbin = 2 ;
//int readvalue ;
//int ledbin = 3 ;
//
//void setup() {
//  // put your setup code here, to run once:
//pinMode (motionbin, INPUT);
//pinMode (ledbin, OUTPUT);
//
//Serial.begin(9600);
//
//
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//  readvalue = digitalRead(motionbin);
//
//if (readvalue==1){
//  digitalWrite(ledbin, HIGH);
//}else{
//    digitalWrite(ledbin, LOW);
//}
//}



int motionbin = 2 ;
int readvalue ;
int buzzer = 3 ;

void setup() {
  // put your setup code here, to run once:
pinMode (motionbin, INPUT);
pinMode (buzzer, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  readvalue = digitalRead(motionbin);

if (readvalue==1){
  digitalWrite(buzzer, HIGH);
}else{
    digitalWrite(buzzer, LOW);
}
}
