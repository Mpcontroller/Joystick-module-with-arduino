#define x A0
#define y A1

void setup()
{
  Serial.begin(9600);//baud rate
}

void loop(){
  int xval=analogRead(A0);
  int yval=analogRead(A1);
  Serial.println("x value:");
  Serial.println(xval);
  Serial.println("y value:");
  Serial.println(yval);
  delay(1000);
}
