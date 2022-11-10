#include <iostream>
#include <iomanip>

void last_Operation(int num, int *table){
	
	int h1 = num % 13;
	int h2 = 2 + num % 9;
	
	for(int i=0;i<=12;i++){ 
		int index = (h1 + h2*i) % 13;
		if(table[index]==0){
			table[index] = num;
			return;
		}
	}
}

int main(void){
	int array[] = {37, 30, 65, 24, 48, 18, 27, 53};
	int table[13] = {0};
	
	for(int i = 0;i<8;i++){ // How to pass an array?
		last_Operation(array[i],table);
	}
	
// Output
	for(int i = 0;i<=12;i++){
		std::cout<<std::setw(2)<<i; 
	}
	std::cout<<std::endl;
	for(int i = 0;i<=12;i++){
		std::cout<<std::setw(2)<<table[i]; 
	}
}

