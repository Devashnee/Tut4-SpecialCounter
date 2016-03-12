#pragma once
class SpecialCounter
{
	private:
		int Start;		//stores the starting value
		int end;		//stores the stopping value
		int increment;		//stores the increment value
		int decrement;		//stores the decrement value
		int currValue;	//stores the current value of the counter
public:
	SpecialCounter();
	~SpecialCounter();
};

