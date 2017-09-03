int inByte = 0;         // incoming serial byte

void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);  
  pinMode(12, OUTPUT);
}

void loop() {
  if(Serial.available()>0) {
    inByte = Serial.read();

    if(inByte == '1') {
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);  
      Serial.println("Light Led 1");
    }
    if(inByte == '2') {
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);  
      Serial.println("Light Led 2");
    }
    if(inByte == '3') {
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);  
      Serial.println("Light Led 3");
    }
    if(inByte == 'A') {
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);  
      Serial.println("Light All Leds");
    }
    if(inByte == 'X') {
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);  
      Serial.println("Off All Leds");
    }
  }
}

