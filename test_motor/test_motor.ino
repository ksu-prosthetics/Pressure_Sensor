#define step 2
#define dir 3

void setup(){
	pinMode(step, OUTPUT);
	pinMode(dir, OUTPUT);
}

void drive(int steps){
	for (int i = 0; i < steps; i++){
		digitalWrite(step, 1);
		delayMicroseconds(1000);
		digitalWrite(step, 0);
		delayMicroseconds(1000);
	}
}

void loop(){
	drive(1000);
}
	
