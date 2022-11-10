#include <iostream>
#include <algorithm>

int main(void){
// Getting Input
	int length;
	std::cout<<"Input "<<std::endl;
	std::cin>>length;
	int list[length];
	for(int i = 0;i<length;i++){
		std::cin>>list[i];
	}

// Operation
	std::sort(list,list+length);
	int *max = (list+length-1);
	int *maxSecond = (list+length-2);
	int *min = list;
	int *minSecond = (list+1);
	
	std::cout<<"Max: "<< (*max)+(*maxSecond)<<std::endl;
	std::cout<<"Min: "<< (*min)+(*minSecond)<<std::endl;
}
