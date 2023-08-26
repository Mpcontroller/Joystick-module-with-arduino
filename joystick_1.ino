#include<Keyboard.h>


const int SW_pin = 2; 
const int X_pin = A0;
const int Y_pin = A1; 
int x, y;

void setup() 
{
  pinMode(SW_pin, INPUT); 
  digitalWrite(SW_pin, HIGH); 
  Serial.begin(115200);
  Keyboard.begin();
}

void loop() 
{
  x = analogRead(X_pin); 
  y = analogRead(Y_pin);  
  if (x >=900 && y >=500 && y<=520) 
  {
    Serial.println("Up:");
    Keyboard.press(217);
  }
  else{
    Keyboard.release(217);
  }
if (x == 0 && y>=500 && y<=520)
  {
    Serial.println("Down:");
    Keyboard.press(218);
  }
  else{
    Keyboard.release(218);
  }
if (x>=520 && x<=550 && y>=600 && y<=1100) 
    {
      Serial.println("Right:"); 
      Keyboard.press(216); 
    }
    else{
      Keyboard.release(216);
    }
if (y == 0) 
    {
      Serial.println("Left:");
      Keyboard.press(215); 
  }
  else{
    Keyboard.release(215);
  }
int z = digitalRead(2);
if( z==0 ){
  Serial.println("Enter:");
  Keyboard.println();
}
}
