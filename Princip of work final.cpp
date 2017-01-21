#include <Servo.h>
#define buttonpin 7;
Servo AxisX;
Servo AxisY;

void setup(){
	float degreeX = valueFromBluetooth;
	float degreeY = valueFromBluetooth;
	AxisX.attach(9);
	AxisY.attach(10);
	int pos = 90;
	pinMode (buttonpin, INPUT);
}


void Stabilisation(){
	float deltaX = degreeX - valueFromBluetoothX;
	float deltaY = degreeY - valueFromBluetoothY;

	if (deltaX < 0){
		while (deltaX != 0){
			AxisX.write(pos);
			pos++;
		}
	}
	else if (deltaX > 0){
		while (deltaX != 0){
			AxisX.write(pos);
			pos--;
		}
	}
	else if (deltaY < 0){
		while (deltaY != 0){
			AxisY.write(pos);
			pos++;
		}
	}
	else if (deltaY > 0){
		while (deltaY != 0){
			AxisY.write(pos);
			pos++;
		}
	}
}

void loop(){ 
	while(digitalRead(buttonpin) = 0){
		delay (10);
	}
	Stabilisation();
}