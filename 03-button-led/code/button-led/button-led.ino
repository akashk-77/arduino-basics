const int buttonPin = 2;
const int ledPin = 8;
void setup() {
pinMode(buttonPin, INPUT_PULLUP); // internal pull-up
pinMode(ledPin, OUTPUT);
}
void loop() {
int buttonState = digitalRead(buttonPin);
if (buttonState == LOW) {
// button pressed
digitalWrite(ledPin, HIGH);
} else {
digitalWrite(ledPin, LOW);
}
}