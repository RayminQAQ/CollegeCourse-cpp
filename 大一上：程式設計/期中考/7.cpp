#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main(void){
	double array[20];
	for(int i = 0;i<20;i++){
		std::cin>>array[i];
	}
	std::sort(array,array+20);
	
// max & min
	std::cout<<"max = "<<array[19]<<std::endl;
	std::cout<<"min = "<<array[0]<<std::endl;
	
// mean
	int sum = 0;
	for(int i = 0;i<20;i++){
		sum = sum + array[i];
	}
	
	float mean;
	mean = ((float)sum)/20; 
	std::cout<<"mean = "<<std::fixed<<std::setprecision(4)<<mean<<std::endl;
	
// standard devation
	double standaraDevation,tempsum = 0;
	for(int i = 0;i<20;i++){
		tempsum = tempsum + (array[i] - mean)*(array[i] - mean);
	}
	tempsum = tempsum/20;
	standaraDevation = pow(tempsum,0.5); // equal?
	std::cout<<"sd = "<<std::fixed<<std::setprecision(4)<<standaraDevation<<std::endl;
	
	
// Bar chart
	// to create a list[index]
		int list[101] = {0};
		for(int i = 0;i<20;i++){
			int index = (int)array[i];
			list[index] = list[index] + 1;
		} // Correct

	// to create a range[r] ; r0 -> 0-9 r1 -> 10-19
		int range[11] = {0}; // Grade distribution 0-9 -> range[0]
		range[10] = list[100];
		
		for(int r = 0;r<10;r++){
			for(int i = (r*10) ; i<(r*10)+10 /*+9?*/ ; i++){
				range[r] = range[r] + list[i];
			}
		}

	// Print
		//0-99
		std::cout<<"Grade distribution:"<<std::endl;
		for(int p = 0;p<10;p++){
			std::cout<<p*10<<"-"<<(p+1)*10-1<<":"; 
			// Star, using range[]
			for(int j = 0;j<range[p];j++){
				std::cout<<"*";
			}
			std::cout<<std::endl;
		}
		//100
		std::cout<<"  100:";
		for(int j = 0;j<range[10];j++){
			std::cout<<"*";
		}
		std::cout<<std::endl;

	// test: 10 20 8 9 12 6 47 88 90 91 11 12 14 88 87 79 100 85 45 65
}
