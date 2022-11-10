#include <iostream>
#include <cstring>

int main(void){
// Get string and check for even number
	char str[100];
	std::cout<<"Input: "<<std::endl;
	std::cin.get(str,100);
	
	int length = strlen(str);
	if((length%2)==0){
		std::cout<<"No"<<std::endl;
		return 1;
	}
	
// Check for odd number
	for(int i = 0;i<length;i+=2){
		if(strcmp((str+i),(str+length-i))!=0){ // (a+i)?
			continue;
		}else{
			std::cout<<"No"<<std::endl;
			return 1;	
		}
	}
	std::cout<<"Yes"<<std::endl;
}

