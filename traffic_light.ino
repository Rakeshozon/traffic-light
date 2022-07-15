
#define PUSH_PIN 2 
#define LED_PIN 11
#define POTEN_PIN A2
#define LED_YELLOW 10
#define LED_GREEN 9

void setup() {
  Serial.begin(9600);
//pinMode(PUSH_PIN , INPUT);
pinMode(LED_PIN , OUTPUT);
  pinMode(LED_YELLOW , OUTPUT);
  pinMode(LED_GREEN ,OUTPUT);


}

void loop() {
  Serial.println("RED is ON ");
 digitalWrite(LED_PIN , HIGH);
  delay(3000);
   digitalWrite(LED_PIN , LOW);
  Serial.println("Yellow is ON ");
  digitalWrite(LED_YELLOW , HIGH);
  delay(1000);
    digitalWrite(LED_YELLOW , LOW);
  Serial.println("Green is ON ");
  
 digitalWrite(LED_GREEN , HIGH);
  delay(3000);
  digitalWrite(LED_GREEN , LOW);
  Serial.println("Yellow is ON ");
  digitalWrite(LED_YELLOW , HIGH);
  delay(1000);
    digitalWrite(LED_YELLOW , LOW);

}
