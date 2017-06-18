#pragma once


class timer
{
	double PCFreq = 0.0;
	__int64 CounterStart = 0;

public:
	void StartCounter();   //wlacza stoper i ustawia czas na 0

	double GetCounter();     //podaje ile czasu minelo od wlaczenia stopera
};
