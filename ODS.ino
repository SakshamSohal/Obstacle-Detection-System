
const int trigPin = 9;
const int echoPin = 7;

const int greenLED = 2;
const int yellowLED = 3;
const int redLED = 4;

long duration;
int distance;

void setup() {
  
  Serial.begin(9600);

  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  
  duration = pulseIn(echoPin, HIGH);

 
  distance = duration * 0.034 / 2;

  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  
  if (distance < 10) {
    digitalWrite(redLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(greenLED, LOW);
  }
  else if (distance >= 10 && distance < 20) {
    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(greenLED, LOW);
  }
  else {
    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(greenLED, HIGH);
  }

  delay(200);  
}


