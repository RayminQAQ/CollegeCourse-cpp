#include <iostream>

int main(void){
// Input value (have only one duplicate num)
	int length;
	std::cout<<"Input "<<std::endl;
	std::cin>>length;
	int list[length];
	for(int i = 0;i<length;i++){
		std::cin>>list[i];
	}
	
// Operation
	int *temp = list; // NULL?
	for(int i = 1;i<length;i++){
		for(int j = i;j<length;j++){
			if((*temp) == (list[j])){
				std::cout<<(*temp);
				return 0;
			}
		}
		temp++;
	}	
	std::cout<<"NO DUPLICATED VALUE"<<std::endl;
} 
