#define sensor1 A0
#define sensor2 A1
#define sensor3 A2

void setup(){
    Serial.begin(9600);
    pinMode(sensor1, INPUT);
    pinMode(sensor2, INPUT);
    pinMode(sensor3, INPUT);
}

void loop(){
    Serial.print(analogRead(sensor1));
    Serial.print(",");
    Serial.print(analogRead(sensor2));
    Serial.print(",");
    Serial.println(analogRead(sensor3));
    delay(10);
}
   