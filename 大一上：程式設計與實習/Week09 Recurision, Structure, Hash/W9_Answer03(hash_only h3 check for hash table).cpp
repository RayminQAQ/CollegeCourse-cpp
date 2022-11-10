#include <iostream>
#include <iomanip>

bool h1_Operation(int array, int table[]){ // How to pass array between function
	int index = array % 13;
	if(table[index]==0){
		table[index] = array;
		return true;
	}else{
		return false;
	}
}


bool h2_Operation(int array, int table[]){
	int index = 2 + array % 9;
	if(table[index]==0){
		table[index] = array;
		return true;
	}else{
		return false;
	}
}


void last_Operation(int num, int table[]){
	
	int h1 = num % 13;
	int h2 = 2 + num % 9;
	
	for(int i=0;i<=12;i++){ 
		int index = (h1 + h2*i) % 13;
		if(table[index]!=0){
			table[index] = num;
			return;
		}
	}
}

int main(void){
	int array[] = {37, 30, 65, 24, 48, 18, 27, 53};
	int table[14] = {0};
	
	for(int i = 0;i<8;i++){ // Pass 
		if(h1_Operation(array[i],table)==true){
			continue;
		}else if(h2_Operation(array[i],table)==true){
			continue;
		}else{
			last_Operation(array[i],table);
		}

	}
	
// Output
	for(int i = 0;i<=12;i++){
		std::cout<<i<<" "; 
	}
	std::cout<<std::endl;
	for(int i = 0;i<=12;i++){
		std::cout<<table[i]<<std::setw(2); 
	}
}

