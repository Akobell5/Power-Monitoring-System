const int voltPin = A3;   //connect it to the analog pin A3
const int currPin = A4;   //connect it to the analog pin A4

const int relay = 2;
void setup() 
{
  Serial.begin(9600);   
  pinMode(voltPin,INPUT);
  pinMode(currPin,INPUT);
  pinMode(relay,OUTPUT);
  digitalWrite(relay,HIGH);
  //you can initialise a display for proper interaction

}

void loop() 
{
  float voltRaw = analogRead(voltPin);
  float currRaw = analogRead(currPin);
  Serial.print("VoltageRaw: ");
  Serial.println(voltRaw);
  Serial.print("CurrentRaw: ");
  Serial.println(currRaw);

  float voltage = voltRaw/2;
  float current = currRaw/200;
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.print("  Current: ");
  Serial.println(current);  

  float power = voltage*current;
  Serial.print("Power: ");
  Serial.println(power);
  delay(1000);

  if (power > 65.0)
  {
    Serial.println("*********************");
    Serial.println("OverLoad detected");
    //call a function to display overloaded
    Serial.println("*********************");
    digitalWrite(relay,LOW);
  }
  else
  {
    Serial.println("###########################");
    Serial.println("Light ON");
    digitalWrite(relay,HIGH);    
    Serial.println("###########################");    
  }
}
