int pomiar = 0;
int odleglosc = 0;
int sensorValue = 0;


void setup(){
Serial.begin(9600);
        pinMode(A1, INPUT);
        pinMode(A0, INPUT);
}

void loop() {
  sensorValue = analogRead(A1);
  pomiar = analogRead (A0);
  odleglosc = ((67870 / (pomiar - 3)) - 40);
  if (odleglosc > 1000){
      Serial.println("Odleglosc jest za duza!!!");  
    }
    else{
      Serial.println("Odleglosc to:");
      Serial.print(odleglosc);
      Serial.println(" mm");
      Serial.println("Stezenie gazu wynosi:");
      Serial.print (sensorValue);
      Serial.print ("  ");
      
    }
    delay (1000);
}
