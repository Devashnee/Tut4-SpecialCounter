#include "SpecialCounter.h"
#include <iostream>

using namespace std;

SpecialCounter::SpecialCounter()
{
	Start = 0;
	end = 255;
	increment = 1;
	decrement = 1;
	currValue = Start;
}

SpecialCounter::SpecialCounter(int start, int End, int Increment, int Decrement)
{
	Start = start;
	end = End;
	increment = Increment;
	decrement = Decrement;
	currValue = Start;
}

SpecialCounter::~SpecialCounter()
{
}

void SpecialCounter::start()
{
	cout << "Enter number first number : ";
	cin >> Start;				
	currValue = Start;			//sets the Current Value of the counter to the first(start) value
}

void SpecialCounter::stop()
{
	cout << "Enter number last number : ";
	cin >> end;					//stores value into end the count
}

void SpecialCounter::stepInc(int stepSize)	
{
	increment = stepSize;
}

void SpecialCounter::stepDec(int stepSize)	
{
	decrement = stepSize;
}

void SpecialCounter::operator--()					
{
	currValue = currValue - decrement;
	cout << endl << "The current value is : " << currValue << endl;		//prints the current value
}

void SpecialCounter::operator++()					//counts the counter Up by +1
{
		currValue = currValue + increment;
}
