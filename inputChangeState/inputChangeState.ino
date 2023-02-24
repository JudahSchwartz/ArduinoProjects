#define inputPin 3
bool state = false;
void setup() {
   pinMode(inputPin, INPUT);
   Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if(digitalRead(inputPin) == HIGH)
  {
    Serial.println("in");
    Serial.println(state);
    state = !state;
    delay(200);
  }

  digitalWrite(LED_BUILTIN, state ? HIGH: LOW);
  delay(10);
  

}
