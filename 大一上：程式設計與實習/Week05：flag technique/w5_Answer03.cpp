#include <iostream>

int main(void){
// Input
	int element;
	std::cout<<"No. of element: (Not 0)";
	do{
		std::cin>>element;
	}while(element == 0);
	
	int array[element];
	std::cout<<"Elements: "<<std::endl;
	for(int i = 0; i<element;i++){
		std::cin>>array[i];
	}
	
// Operation

	// Sort array -> can use sort(array,array+element); in <algorithm>
	for(int i = 0; i<element; i++){
		for(int j = 0; j<(element-i);j++){
			// Swap
			int temp;
			if(array[j] > array[j + 1]){
				temp = array[j];
            	array[j] = array[j + 1];
            	array[j + 1] = temp;	
			}
		}
	}
		
	// Check
	int flag = 1;
	int tem = array[0];
	for(int i = 0; i<element; i++){
		if(tem != array[i]){
			tem = array[i];
			flag++;
		}
	}
	
	// Output
	std::cout<<flag<<" integers"<<std::endl;
}
