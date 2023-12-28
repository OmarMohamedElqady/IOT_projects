int trigPin = 2 ;
int echoPin = 4 ;
int buzzer = 6 ; 
double Distance , traveltime ;

void setup() {
  // put your setup code here, to run once:
  pinMode (trigPin, OUTPUT);
  pinMode (echoPin, INPUT);
  pinMode (buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(4); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  traveltime = pulseIn (echoPin, HIGH);
  Distance = 0.034 * (traveltime/2)  ;
  Serial.println(Distance);                 //serial ==> هيطبعها بالسنتي
  delay(60);

  if (Distance<100){
    digitalWrite(buzzer, HIGH);}


  else {
    digitalWrite(buzzer, LOW);}

    }
  
