#include <iostream>
#include <map>

int main(void){
	std::map<char,int> map;
// ASCII: a(97)~z(122)
	for(int i=0;i<13;i++){
		char character1 = 122 - 2*i;
		map[character1] = i+1;
		char character2 = 121 - 2*i;
		map[character2] = i+1;
	}

	char find;
	std::cout<<"Please enter a character to find the corresponding value: ";
	std::cin>>find;
	std::cout<<"Find: "<<map[find]<<"\n";
} 
