#include <TrafficLight.h>
//Implementa��o da classe 
/*Construtor da classe TrafficLight
define o pino e o tempo que ir� aguardar */
TrafficLight::TrafficLight(byte _pin, int _time) {
	//modo que o pino ir� operar (emitir� sinal el�trico de sa�da)
	pinMode(_pin, OUTPUT);
	pin = _pin;
	time = _time;
}

void TrafficLight::on() {
	digitalWrite(pin, HIGH);
}

void TrafficLight::off() {
	digitalWrite(pin, LOW);
}

void TrafficLight::wait() {
	delay(time);
}

//opera��o na l�mpada
void TrafficLight::operate() {
	on();
	wait();
	off();
}