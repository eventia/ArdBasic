void setup() {
  Serial.begin(9600);    // 시리얼통신 초기화
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);  
  pinMode(12, OUTPUT);
}

void loop() {
  int brightness = analogRead(A0);    // CDS 센서값 읽기
  Serial.print("brightness : ");    
  Serial.println(brightness);     // 읽은 센서값을 모니터에 표시
  delay(500);   // 0.5초 기다림
}

