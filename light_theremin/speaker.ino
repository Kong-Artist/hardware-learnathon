// constants defining range of outputs
// this contains about two octaves, starting from middle C
const int LOWER_FREQ = 250;
const int UPPER_FREQ = 1050;

const int speakerPin = 4;  // output pin for the speaker

// 440 Hz is the A above middle C, and what most tuners use as a reference value!
int frequency = 440;

void setup() {
  Serial.begin(9600);          
  pinMode(speakerPin, OUTPUT); // set the speaker pin as output
}

void loop() {
  Serial.println(frequency);
  tone(speakerPin, frequency, 500);
  delay(2000);
}
