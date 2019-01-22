int pomiar = 0;
int odleglosc = 0;

void setup()
{
  Serial.begin(9600);
  	pinMode(A0, INPUT);
  	pinMode(13, OUTPUT);

}

void loop(){
  pomiar = analogRead (A0) ;
  odleglosc = ((67870 / (pomiar - 3)) - 40);
  if (odleglosc > 100) {
    digitalWrite(13, LOW);
    delay(500);        
   
  }  
  //jeśli pomiar jest mniejszy niż 500 mm, to dioda NIE pali się
  
  else {
    Serial.println("Mierzona odleglosc wynosi:");
    Serial.print(odleglosc);
    Serial.println(" mm");
    digitalWrite(13, HIGH);
    delay(500);
    
  }  
  //jeśli pomiar jest większy niż 500 mm, to dioda PALI się oraz w konsoli pojawia się informacja o mierzonej odległości
  
}    
    

  
