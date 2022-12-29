#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

// 7 8 9 ¡Ÿ®Sºg
 
int main ()
{
    vector<int> integers = {1,2,3,4,5,6,7};
    try{
    	cout << "\nAttempt to display integers.at(15)" << endl;
		cout << integers.at(15) << endl;	
	}catch(out_of_range &ex){
		std::cout<<"Error: "<<ex.what()<<"\n";
	}
    return 0;
}
