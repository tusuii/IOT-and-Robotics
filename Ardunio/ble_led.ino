char incomingChar; // Variable to store incoming characters

int y = 7;
int g = 8;

void setup() {
  Serial.begin(9600); 
  pinMode(y, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  // Check if data is available on the serial port
  if (Serial.available() > 0) {
    incomingChar = Serial.read(); 

    // Check if the received character is '1'
    if (incomingChar == '1') {
      digitalWrite(y, HIGH); 
      Serial.println("Yellow LED is ON"); 
    }
    if (incomingChar == '2') {
      digitalWrite(g, HIGH); // Turn the LED on
      Serial.println("Green LED is ON"); 
    }
    // Check if the received character is '0'
    if (incomingChar == '3') {
      digitalWrite(y, LOW); 
      Serial.println("LED is OFF"); 
    }
    if (incomingChar == '4') {
      digitalWrite(g, LOW); 
      Serial.println("LED is OFF"); 
    }
    if (incomingChar == '5') {
      digitalWrite(y, LOW);
      digitalWrite(g, LOW); 
      Serial.println("LED is OFF"); 
    }
  }
}
