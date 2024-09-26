// Pin assignments
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

// Function to set the color of the RGB LED
void setColor(int red, int green, int blue) {
  analogWrite(redPin, 255 - red);   // For common anode, we invert the value
  analogWrite(greenPin, 255 - green);
  analogWrite(bluePin, 255 - blue);
}

void setup() {
  // Set pins as output
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Color 1: Red
  setColor(255, 0, 0);  // Full red
  delay(1000);
  
  // Color 2: Green
  setColor(0, 255, 0);  // Full green
  delay(1000);
  
  // Color 3: Blue
  setColor(0, 0, 255);  // Full blue
  delay(1000);
  
  // Color 4: Yellow (Red + Green)
  setColor(255, 255, 0);
  delay(1000);
  
  // Color 5: Cyan (Green + Blue)
  setColor(0, 255, 255);
  delay(1000);
  
  // Color 6: Magenta (Red + Blue)
  setColor(255, 0, 255);
  delay(1000);
  
  // Color 7: White (Red + Green + Blue)
  setColor(255, 255, 255);
  delay(1000);
}
