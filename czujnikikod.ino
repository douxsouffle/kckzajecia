int pomiar = 0;
int odleglosc = 0;
int sensorValue = 0;
float voltage;

void setup(){
Serial.begin(9600);
        pinMode(A1, INPUT);
        pinMode(A0, INPUT);
}

void loop() {
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.00 / 1023.0);
  pomiar = analogRead (A1);
  odleglosc = ((67870 / (pomiar - 3)) - 40);
  if (odleglosc > 1000){
      Serial.println("Odleglosc jest za duza!!!");
    }
    else{
      Serial.println("Odleglosc to:");
      Serial.print(odleglosc);
      Serial.println(" mm");
      Serial.println("Stezenie gazu wynosi");
      Serial.print (voltage);
      Serial.print ("  ");

    }
    delay (1000);
}
