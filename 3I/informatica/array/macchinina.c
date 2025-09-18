int triggerPort = 9;
int echoPort = 8;
int motore1 = 4;
int motore2 = 5;
int Led =3;
int pulsante=2;
int stato=0;

void accendiLed (){
 digitalWrite(Led, HIGH );
}
void spegniLed (){
 digitalWrite(Led, LOW );
}


void setup() {
pinMode( triggerPort, OUTPUT );
pinMode( echoPort, INPUT );
pinMode( motore1, OUTPUT );
pinMode( motore2, OUTPUT );
pinMode( pulsante, INPUT );
Serial.begin( 9600 );
}

void loop() {
 while(stato ==0){ 
digitalWrite( triggerPort, LOW );
digitalWrite( triggerPort, HIGH );
delayMicroseconds( 10 );
digitalWrite( triggerPort, LOW );
long duration = pulseIn( echoPort, HIGH );
long r = 0.034 * duration / 2;
Serial.println(r);

stato=digitalRead(pulsante);
int luminosita=analogRead(A0);
Serial.println(luminosita);



      if(r<=20){ 
                  digitalWrite(motore1,LOW);
                  digitalWrite(motore2, HIGH);
                  delay(3000);
                } else {
                        digitalWrite(motore1,HIGH);
                        digitalWrite(motore2, HIGH);
                       }

if(luminosita < 500) {
                      accendiLed();
                      }else spegniLed();

}

digitalWrite(motore1,LOW);
digitalWrite(motore2,LOW);
spegniLed();

 delay(100);
}
