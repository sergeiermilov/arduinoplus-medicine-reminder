const int blue = 3;
int buz = 2; 

void setup() 
{  
  pinMode(blue, OUTPUT);
  pinMode(buz,OUTPUT);
}

void loop() 
{  
  tone(buz,1000,100);
  delay(86400000);
  goto buz;
  buz:
  {
    digitalWrite(blue, HIGH);
    delay(100);
    digitalWrite(blue,LOW);
    delay(100);
    tone(buz,1000,150);
    delay(1000);
    goto buz;
   } 
}
