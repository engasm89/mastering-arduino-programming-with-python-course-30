/*
 * Course: Mastering Arduino Programming With Python Course 30
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: Mastering Arduino Programming With Python Course 30
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Serial

#define INPUT 0 // Input

// Pin for a mock sensor
static const int SENSOR_PIN = 0; // A0

// Stubs
void pinMode(int pin, int mode) { /* set */ } // Configure
int analogRead(int pin) { return 700; } // Read analog
void delay(int ms) { /* wait */ } // Delay
void Serial_begin(long baud) { printf("Serial start %ld\n", baud); } // Serial
void Serial_println(const char *s) { printf("%s\n", s); } // Println

float normalize(int raw) { // Normalize 0..1023 to 0..1
  return (float)raw / 1023.0f; // Scale
}

void setup(void) { // Initialize
  pinMode(SENSOR_PIN, INPUT); // Sensor
  Serial_begin(115200); // Fast serial for Python
}

void loop(void) { // Main loop
  int raw = analogRead(SENSOR_PIN); // Read
  float norm = normalize(raw); // Normalize
  char line[64]; // Buffer
  snprintf(line, sizeof(line), "RAW=%d,NORM=%.3f", raw, norm); // Encode
  Serial_println(line); // Print for Python
  delay(500); // 0.5s interval
}

// Main routine: orchestrates the mastering arduino programming with python course 30 scenario
int main(void) { // Entry
  setup(); // Init
  for (int i = 0; i < 8; ++i) { // Simulated cycles
    loop(); // Execute
  } // End
  return 0; // Exit
}

