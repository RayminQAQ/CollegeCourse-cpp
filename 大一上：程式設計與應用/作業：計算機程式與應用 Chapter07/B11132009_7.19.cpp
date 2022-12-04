#include <iostream>
#include <array>
#include <iomanip>
#include <stdexcept>
using namespace std;

const int arraySize = 7;
void outputArray(const array<int, arraySize>&);
void inputArray(array<int, arraySize>&,int toInput);


int main()
{
	array<int, arraySize> integers1 = {0};
	array<int, arraySize> integers2 = {0};

	cout << "Size of array integers1 is " << integers1.size() << "\narray after intialization: ";
	outputArray(integers1);
	cout << "\nSize of array integers2 is " << integers2.size() << "\narray after intialization: ";
	outputArray(integers2);

	cout << "\nEnter 14 integers: " << endl;
	inputArray(integers1, 7);
	inputArray(integers2, 7);
	
	cout << "\nAfter input, the arrays contain:\n"
		<< "integers1: ";
	outputArray(integers1);
	cout << "integers2: ";
	outputArray(integers2);

	cout << "\nEvaluating: integers1!=integers2" << endl;
	if (integers1 != integers2) {
		cout << "integers1 and integers2 are not equal" << endl;

	}

	array<int, arraySize> integers3 = integers1 ;

	cout << "\nSize of array integers3 is " << integers3.size()
		<< "\narray after initialization: ";
	outputArray(integers3);

	cout << "\nAssigning integers2 to integers1" << endl;
	integers1 = integers2;
	cout << "integers1: ";
	outputArray(integers1);
	cout << "integers2: ";
	outputArray(integers2);

	cout << "\nEvaluating: integers1==integers2" << endl;
	if (integers1 == integers2) {
		cout << "integers1 and integers2 are equal" << endl;
	}

	cout << "\nintegers1[5] is " << integers1[5];

	cout << "\n\nAsigning 1000 to integers1[5]" << endl;
	integers1[5] = 1000;
	cout << "integers1: ";
	outputArray(integers1);

	try {
		cout << "\nAttempt to display integers1.at(15)"<<endl;
		cout << integers1.at(15) << endl;
	}
	catch (out_of_range& ex) {
		cerr << "An exception occured: " << ex.what() << endl;

	}
	//Here is where the push_back is used
	//Arrays do not have that functionality

}
void outputArray(const array<int, arraySize>& items) {
	for (int item : items) {
		cout << item << " ";
	}
	cout << endl;
}
void inputArray(array<int, arraySize>& items,int toInput) {
	for (int i = 0; i < toInput; i++) {
		cin >> items[i];
	}
	cout << endl;
}