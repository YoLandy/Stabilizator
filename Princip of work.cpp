#include <Servo.h>
Servo AxisX;
Servo AxisY;
void setup(){
	float degree = valueFromBluetooth;
	AxisX.attach(9);
	AxisY.attach(10);
	int pos = 0;
}

void loop(){
	if (degree < 0){
		while (degree != 0){
			AxisX.write(pos);
			pos++;
		}
	}
	if else (degree > 0){
		while (degree != 0){
			AxisX.write(pos);
			pos++;
		}
	}
	else{
		delay(10);
	}
}