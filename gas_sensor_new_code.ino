int LEDred=4;
int LEDgreen=3;
int Buzzer=2;
int Sensor=A0;
int limit = 400;

void setup(){

  pinMode(LEDred, OUTPUT);
  pinMode(LEDgreen, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(Sensor, INPUT);
  Serial.begin(9600);
}
void loop(){
  int value =analogRead(Sensor);
  Serial.print("Sensor Value=");
  Serial.println(value);
  if(value>=limit){
    digitalWrite(LEDred, HIGH);
    digitalWrite(Buzzer, HIGH);
    digitalWrite(LEDgreen, LOW);
    delay(500);
    digitalWrite(LEDred, LOW);
    digitalWrite(Buzzer, LOW);
    delay(500);
    Serial.println("Gas Detected");
  }
  else
  {

    digitalWrite(LEDred,LOW);
    digitalWrite(Buzzer, LOW);
    digitalWrite(LEDgreen, HIGH);
    Serial.println("You are safe")
    delay(1000);
  }
  Serial.println("");
}
