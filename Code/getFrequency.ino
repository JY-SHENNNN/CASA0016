// Define color sensor pins
#define LED 7
#define S0 6
#define S1 5
#define S2 4
#define S3 3
#define sensorOut 2
 
 
void setup() {
	// Set S0 - S3 as outputs
	pinMode(S0, OUTPUT);
	pinMode(S1, OUTPUT);
	pinMode(S2, OUTPUT);
	pinMode(S3, OUTPUT);
  pinMode(LED, OUTPUT);
 
	// Set Pulse Width scaling to 20%
	digitalWrite(S0,HIGH);
	digitalWrite(S1,LOW);
  digitalWrite(LED, HIGH);
 
	// Set Sensor output as input
	pinMode(sensorOut, INPUT);
 
	// Setup Serial Monitor
	Serial.begin(9600);
}
 
void loop() {
 
	// Read Blue Pulse Width
  int* myArray = getBluePW();  // Receive the returned array pointer
  for (int i = 0; i < 10; i++) {
    Serial.print("i: ");
    Serial.print(i);            
    Serial.print(" - Frequency: ");
    Serial.println(myArray[i]); // print all the frequency value stored in myarr
  }
  delay(3000);

}

 
// Function to read Blue Pulse Widths
int* getBluePW() {
  // Set sensor to read Blue only
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);

  // Static array to store multiple frequency samples
  static int freq[10]; 

  // Read 10 samples of frequency
  for (int i = 0; i < 10; i++) {
    int PW = pulseIn(sensorOut, LOW);   // read the pulse low time, returned in us
    int frequency = 1000000 / (2 * PW); // calculate frequency = 1*(10^6) / 2*duration
    freq[i] = frequency;  
    delay(500);                         // delay added to avoid quick read
  }
  // return the array pointer
  return freq;
}

