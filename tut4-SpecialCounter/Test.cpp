#include "SpecialCounter.h"
#include <iostream>

using namespace std;
int main(){
	SpecialCounter Counter;
	int ans;

	do{
		cout <<endl<< "1>enter start value" << endl;
		cout << endl << "2>enter end value" << endl;
		cout << endl << "3>enter increment" << endl;
		cout << endl << "4>enter decrement" << endl;
		cout << endl << "5>count in acsending order" << endl;
		cout << endl << "6>count in decsending order" << endl << endl;
		cout << endl << "7>EXIT" << endl;

		cin >> ans;

		if (ans == 1)
			Counter.start();
		else if (ans == 2)
			Counter.stop();
		else if (ans == 3)
		{
			int temp;
			cout << "Enter increment: ";		//user enters Increment value
			cin >> temp;
			Counter.stepInc(temp);
		}
		else if (ans == 4)
		{
			int temp;
			cout << "Enter decrement: ";		//prompts user to enter Decrement value
			cin >> temp;
			Counter.stepDec(temp);
		}
		else if (ans == 5)
			Counter++;
		else if (ans == 6)
			Counter--;
		else if (ans == 7)
			cout << "Counter exit.";
		else
			cout << "Invalid";
	} while (ans != 7);
}
