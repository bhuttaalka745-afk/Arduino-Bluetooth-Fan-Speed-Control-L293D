#define enA 9
#define in1 6
#define in2 8

void setup()
{
  Serial.begin(9600);
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
   pinMode(in2, OUTPUT);

  digitalWrite(in1, HIGH);  
  digitalWrite(in2, LOW);   
}

void loop()
{
  if (Serial.available() > 0)
  {
    int value = Serial.parseInt();   

    analogWrite(enA, value);         

    Serial.print("Speed: ");
    Serial.println(value);
  }
}