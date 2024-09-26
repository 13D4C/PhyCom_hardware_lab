// Define the segments for each digit in a 7-segment display
int num_array[10][7] = {  { 1,1,1,1,1,1,0 },    // 0
                          { 0,1,1,0,0,0,0 },    // 1
                          { 1,1,0,1,1,0,1 },    // 2
                          { 1,1,1,1,0,0,1 },    // 3
                          { 0,1,1,0,0,1,1 },    // 4
                          { 1,0,1,1,0,1,1 },    // 5
                          { 1,0,1,1,1,1,1 },    // 6
                          { 1,1,1,0,0,0,0 },    // 7
                          { 1,1,1,1,1,1,1 },    // 8
                          { 1,1,1,0,0,1,1 }};   // 9

// Define the pins for each segment of the first 7-segment display
const int segment1_a = 2; 
const int segment1_b = 3; 
const int segment1_c = 4;
const int segment1_d = 5;
const int segment1_e = 6;
const int segment1_f = 7;
const int segment1_g = 8;

// Define the pins for each segment of the second 7-segment display
const int segment2_a = 10; 
const int segment2_b = 11; 
const int segment2_c = A3;
const int segment2_d = 13;
const int segment2_e = A5;
const int segment2_f = A0;
const int segment2_g = A1;

void setup() { 
  // Set pin modes for each segment of the first 7-segment display
  pinMode(segment1_a, OUTPUT);   
  pinMode(segment1_b, OUTPUT);   
  pinMode(segment1_c, OUTPUT);   
  pinMode(segment1_d, OUTPUT);   
  pinMode(segment1_e, OUTPUT);   
  pinMode(segment1_f, OUTPUT);   
  pinMode(segment1_g, OUTPUT);

  // Set pin modes for each segment of the second 7-segment display
  pinMode(segment2_a, OUTPUT);   
  pinMode(segment2_b, OUTPUT);   
  pinMode(segment2_c, OUTPUT);   
  pinMode(segment2_d, OUTPUT);   
  pinMode(segment2_e, OUTPUT);   
  pinMode(segment2_f, OUTPUT);   
  pinMode(segment2_g, OUTPUT);
}

void loop() {
  // ครั้งที่ 1: ตัวแรก 6, ตัวสอง 6
  displayDigit(6, 1);  // Display 6 on the first 7-segment
  displayDigit(6, 2);  // Display 6 on the second 7-segment
  delay(1000); // Wait for 1 second
  
  // ครั้งที่ 2: ตัวแรก 0, ตัวสอง 7
  displayDigit(0, 1);  // Display 0 on the first 7-segment
  displayDigit(7, 2);  // Display 7 on the second 7-segment
  delay(1000); // Wait for 1 second

  // ครั้งที่ 3: ตัวแรก 0, ตัวสอง 2
  displayDigit(0, 1);  // Display 0 on the first 7-segment
  displayDigit(2, 2);  // Display 2 on the second 7-segment
  delay(1000); // Wait for 1 second

  // ครั้งที่ 4: ตัวแรก 1, ตัวสอง 6
  displayDigit(1, 1);  // Display 1 on the first 7-segment
  displayDigit(6, 2);  // Display 6 on the second 7-segment
  delay(1000); // Wait for 1 second
}

// Function to display a specific digit on the 7-segment display
void displayDigit(int digit, int display) {
  if (display == 1) { // For the first 7-segment display
    digitalWrite(segment1_a, num_array[digit][0]);
    digitalWrite(segment1_b, num_array[digit][1]);
    digitalWrite(segment1_c, num_array[digit][2]);
    digitalWrite(segment1_d, num_array[digit][3]);
    digitalWrite(segment1_e, num_array[digit][4]);
    digitalWrite(segment1_f, num_array[digit][5]);
    digitalWrite(segment1_g, num_array[digit][6]);
  }
  else if (display == 2) { // For the second 7-segment display
    digitalWrite(segment2_a, num_array[digit][0]);
    digitalWrite(segment2_b, num_array[digit][1]);
    digitalWrite(segment2_c, num_array[digit][2]);
    digitalWrite(segment2_d, num_array[digit][3]);
    digitalWrite(segment2_e, num_array[digit][4]);
    digitalWrite(segment2_f, num_array[digit][5]);
    digitalWrite(segment2_g, num_array[digit][6]);
  }
}
