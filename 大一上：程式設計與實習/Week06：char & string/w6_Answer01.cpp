#include <iostream>
#include <cstring>
#include <cctype>

int main(void){
// Get string
	char str[100];
	std::cout<<"Input: "<<std::endl;
	std::cin.get(str,100);
	if(strlen(str) != 8){
		std::cout<<"error"<<std::endl;
		return 1;
	}
	
//do 8 times 
	int flag = 0;
	for(int i = 0; i<8; i++){
	// check for letter 65~90 & 97~122
		if((((int)str[i])>=65) && (((int)str[i])<=90)){
			flag++;
		}else if( (((int)str[i])>=97) && (((int)str[i])<=122) ){
			flag++;
		}		
	// check for number 48~57 
		if( (((int)str[i])>=48) && (((int)str[i])<=57) ){
			flag++;
		}
	}
	
// Check flag
	if(flag==8){
		std::cout<<"correct"<<std::endl;
		return 0;
	}else{
		std::cout<<"error"<<std::endl;
		return 1;
	}
		
}
