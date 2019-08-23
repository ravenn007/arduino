/**
 * Estudo do laço for
 * @author Ravena Angelo
 */


void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
int valor= 9;
for (int i=0; i<=10; i++) {
Serial.print(valor);
Serial.print(" x ");
Serial.print (i);
Serial.print (" = ");
Serial.println (valor * i);
  
  }
}


void loop() {
  // put your main code here, to run repeatedly:

}
