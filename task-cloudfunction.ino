//buddySystem

//Led is connected to D6
int led1 = D6; 


void setup() {


    pinMode(led1, OUTPUT);
    //subscribing to the event
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);


}


//handle the published event
void myHandler(const char *event, const char *data)
{

    if (strcmp(data,"wave")==0) {
        flashWave();
        flashWave();
        flashWave();
    }
    else if (strcmp(data,"pat")==0) {
        flashPat();
        flashPat();
        flashPat();
    }
    else {
       
    }
}

//function to blink waves
void flashWave()
{
  digitalWrite(led1,HIGH);
  delay(400);
  digitalWrite(led1,LOW);
  delay(400);
}

//function to blink pats
void flashPat()
{
  digitalWrite(led1,HIGH);
  delay(150);
  digitalWrite(led1,LOW);
  delay(150);
}