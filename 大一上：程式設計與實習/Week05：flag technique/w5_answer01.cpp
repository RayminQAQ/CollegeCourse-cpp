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

	int start;
	std::cout<<"Starting: "<<std::endl;
	std::cin>>start;
	
	int tolerance;
	std::cout<<"Tolerance: "<<std::endl;
	std::cin>>tolerance;

//function:
	int count = start;
	int flag = 0;
	
	// Do for element time
	for(int i = 0;i<element;i++){
		// Check for element time
		for(int j = 0;j<element;j++){
			if(count==array[j]){
				count += tolerance; // ADD HERE
				flag++;
			}
		}
	}

	if(flag == element){
		std::cout<<"is a sequence"<<std::endl;
	}else{
		std::cout<<"is not a sequence"<<std::endl;
	}
}
