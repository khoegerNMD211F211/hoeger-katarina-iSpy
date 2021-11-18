#define LED 9

void setup() {
  // put your setup code here, to run once:
  pinMode( LED , OUTPUT );
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite( LED , HIGH );   // turn on LED
  delay(50);                    // wait half a second
  digitalWrite( LED , LOW );    // turn off LED
  delay(50);                    // wait half a second
}
