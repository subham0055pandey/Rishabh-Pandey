void setup() {
   pinMode(5, OUTPUT);
   pinMode(6, INPUT);
}

void loop() {
  
  if (6== HIGH) {
        digitalWrite(5, HIGH);
  } else {
        digitalWrite(5, LOW);
  }
}
