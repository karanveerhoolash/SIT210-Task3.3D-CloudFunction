const pin_t LED = D2;

void setup() {
    pinMode(LED,OUTPUT);
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", Handler);
}

void loop(){
    // do nothing here
}
    
    
void Handler(const char *event, const char *data) {
    
    if (strcmp(data,"wave") == 0){
        digitalWrite(LED,HIGH);
        delay(1500);
        digitalWrite(LED,LOW);
        delay(1500);
        digitalWrite(LED,HIGH);
        delay(1500);
        digitalWrite(LED,LOW);
        delay(1500);
        digitalWrite(LED,HIGH);
        delay(1500);
        digitalWrite(LED,LOW);
        delay(1500);
    }
        
}  
