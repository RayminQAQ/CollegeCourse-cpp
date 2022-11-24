#include <iostream>

int main(void){
	std::string str;
	getline(std::cin,str);
	for(int i = 0;i<str.length();i++){
		if(str[i]=='/'){
			std::cout<<std::endl;
		}else{
			std::cout<<str[i];
		}
	}
	return 0;
}
