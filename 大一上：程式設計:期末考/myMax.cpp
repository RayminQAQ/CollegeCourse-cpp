#include <iostream>
using namespace std;

// Write a function templated called maximum in myMax.cpp to determine the larger of two arguments and return the largest one.
template <typename T>
	T maximum(T a, T b){
		if(a>b){
			return a;
		}else{
			return b;
		}
	}


int main(){
    // demonstrate maximum with int values
    int int1{0}; // first int value
    int int2{0}; // second int value

    cout << "Input two integer values: ";
    cin >> int1 >> int2;

    // invoke int version of maximum
    cout << "The larger integer value is: " << maximum(int1, int2);

    // demonstrate maximum with char values
    char char1{' '}; // first char value
    char char2{' '}; // second char value

    cout << "\n\nInput two characters: ";
    cin >> char1 >> char2;

    // invoke char version of maximum
    cout << "The larger character value is: " << maximum(char1, char2);

    // demonstrate maximum with double values
    double double1{0}; // first double value
    double double2{0}; // second double value

    cout << "\n\nInput two double values: ";
    cin >> double1 >> double2;

    // invoke double version of maximum
    cout << "The larger double value is: " << maximum(double1, double2) << endl;

    return 0;
}
