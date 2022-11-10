#include <iostream>

int main(void){
	// Input value
	int element;
	std::cout<<"No. of element: ";
	std::cin>>element;
	
	int array[element];
	std::cout<<"Elements: "<<std::endl;
	for(int i = 0; i<element;i++){
		std::cin>>array[i];
	}
	int search;
	std::cout<<"Searched value: "<<std::endl;
	std::cin>>search;
	
	// Operation
	int flag = 0;
	for(int i = 0;i<element;i++){
		if(array[i]==search){
			flag++;
		}
	}
	
	if(flag != 0){
		std::cout<<"Appear "<<flag<<" times"; 
	}else{
		std::cout<<"Appear "<<flag<<" time"; 
	}
	
}
