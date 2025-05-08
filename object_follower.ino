// Define sensor and motor pins
#define LS A0     // Left sensor
#define RS A1     // Right sensor
#define LM1 A2    // Left motor input 1
#define LM2 A3    // Left motor input 2
#define RM1 A4    // Right motor input 1
#define RM2 A5    // Right motor input 2

void setup() {
  // Set sensor pins as input
  pinMode(LS, INPUT);
  pinMode(RS, INPUT);
  
  // Set motor pins as output
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
}

void loop() {
  // Read sensor values
  int Right = digitalRead(LS);
  int Left = digitalRead(RS);

  // Move forward
  if ((Right == 0) && (Left == 0)) {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM2, HIGH);
    digitalWrite(RM1, LOW);
  }
  // Turn left
  else if ((Right == 0) && (Left == 1)) {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM2, HIGH);
    digitalWrite(RM1, LOW);
  }
  // Turn right
  else if ((Right == 1) && (Left == 0)) {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
  }
  // Stop
  else if ((Right == 1) && (Left == 1)) {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
  }
}
