int xPin = A0; // A0-A5 analog pinlerinden herhangi birine bağlanabilir.
int xPozisyonu = 0;

 
void setup() {
Serial.begin(9600);
pinMode(xPin, INPUT);

 
 
}
 
void loop() {
xPozisyonu = analogRead(xPin);

Serial.print(xPozisyonu);
Serial.print("\n");

 
delay(100);
}
