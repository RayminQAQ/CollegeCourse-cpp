#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int original_arr[6] = {1,2,3,4,5,6};

    cout << "Original array: ";
    for(int i=0;i<6;i++){
    	if(i==5){
    		std::cout<<*(original_arr+i)<<"\n";
    		break;
		}
    	std::cout<<*(original_arr+i)<<", ";
	}
	
    cout << "Reversed array: ";
   	sort(original_arr,original_arr+6,[](int a,int b){return a>b;});
   	for(int i=0;i<6;i++){
   		if(i==5){
    		std::cout<<*(original_arr+i)<<"\n";
    		break;
		}
    	std::cout<<*(original_arr+i)<<", ";
	}
	std::cout<<"\n";
    return 0;
}
