int dioda = 13;
int szybkie = 300;
int opoznione = 900;

void setup()
{
    pinMode(dioda, OUTPUT);
}

void zadanie(int predkosc)
{
  digitalWrite(dioda, HIGH);
  delay(predkosc);
  digitalWrite(dioda, LOW);
  delay(szybkie);
}

void loop()
{
   for (int x = 1; x <= 3; x++)
  {
    zadanie(szybkie);
  }
  delay(100);
  for (int x = 1; x <= 3; x++)
  {
    zadanie(opoznione);
  }
  delay(100);
  for (int x = 1; x <= 3; x++)
  {
    zadanie(szybkie);
  }
  delay(2500);
}
