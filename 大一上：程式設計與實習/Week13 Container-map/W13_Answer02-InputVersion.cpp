#include <iostream>
#include <map>

int main(void){
	unsigned int times;
	std::cout<<"Enter how many names to enter as keys\n";
	std::cin>>times;
	
	std::cout<<"Name\n";
	std::map<std::string,int> map;
	for(int i=0;i<times;i++){
		std::string name;
		int temp;
		std::cin>>name>>temp;
		map[name] = temp;
	}
	
	std::string check = "NULL";
	while(true){
		std::cout<<"Check for the name(enter q to exit):\n";
		std::cin>>check;
		if(check=="q"){
			break;
		}
		std::cout<<map[check];
	}
} 

