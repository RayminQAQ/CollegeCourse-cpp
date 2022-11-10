#include <iostream>

int main(void){
	int row;
	std::cout<<"Enter the number of rows: ";
	std::cin>>row;
	
// Operation
	int i = 0;
	// *****
	while(i<row){
		std::cout<<"*";
		i++;
	}
	std::cout<<std::endl;
	
	// *    *
	int j = 0;
	while(j<(row-2)){
		std::cout<<"*";
		for(int l = 0;l<(row-2);l++){
			std::cout<<" ";
		}
		std::cout<<"*";
		std::cout<<std::endl;
		j++;
	}
	
	//
	int k = 0;
	while(k<row){
		std::cout<<"*";
		k++;
	}
	std::cout<<std::endl;
}
