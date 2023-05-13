void setup() {
  Serial.begin(9600); // set the baud rate to match the incoming data
}

void loop() {
  if (Serial.available() > 0) { // check if data is available
    int incomingByte = Serial.read(); // read the incoming byte
    Serial.print("Distance = "); // print a message to indicate that data was received
    Serial.println(incomingByte); // print the received byte
  }
}
