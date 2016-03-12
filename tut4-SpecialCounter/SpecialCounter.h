#pragma once
class SpecialCounter
{
	private:
		int Start;		//stores the first value
		int end;		//stores the ending/stopping value
		int increment;		//stores the increment value
		int decrement;		//stores the decrement value
		int currValue;	//stores the current value of the counter

public:
public:

	SpecialCounter();		//default constructor
	SpecialCounter(int, int, int, int);

	void start();			//changes the Starting 
	void stop();			//changes the Stopping 
	void stepInc(int);		//changes the Increment
	void stepDec(int);		//changes the Decrement 
	void operator++();		//counts Up by one
	void operator--();		//counts Down by one

	~SpecialCounter();
};

