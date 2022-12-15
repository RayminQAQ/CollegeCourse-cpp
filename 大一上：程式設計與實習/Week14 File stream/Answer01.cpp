#include <iostream>
#include <string>
#include <fstream>
void readmode();
void writemode();

int main(void){
	while(true){
		int mode;
		std::cout<<"Enter the mode to operate (1:read, 2:input, 3:close)\n";
		std::cin>>mode;
		switch(mode){
			case 1: // read
				readmode();
				break;
			case 2: // write
				writemode();
				break;
			case 3: // close
				std::cout<<"Close the file\n";
				return 0;
			default:
				std::cout<<"Wrong Input\n";	
		}
	}
}

void readmode(){
	std::fstream file;
	file.open("data.txt", std::fstream::in | std::fstream::app); // ios::in fstream::in
	std::string name, number, birthday;
	while(file>>name>>number>>birthday){
		std::cout<<"Name: "<<name<<"\n";
		std::cout<<"Number: "<<number<<"\n";
		std::cout<<"Birthday: "<<birthday<<"\n";
		std::cout<<"\n";
	}
	file.close();
	return;
}

void writemode(){
	std::fstream file;
	file.open("data.txt", std::fstream::in | std::fstream::app); // ios::in fstream::in
	std::string name, number, birthday;
	std::cin>>name>>number>>birthday;
	file<<name<<" "<<number<<" "<<birthday<<"\n\n";
	file.close();
	return;
}
