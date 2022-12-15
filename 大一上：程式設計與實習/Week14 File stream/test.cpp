#include <iostream>
#include <string>
#include <fstream>

int main(void){
	std::fstream myfile;
	myfile.open("test.txt", std::fstream::in | std::fstream::out); // app
	if(myfile.is_open()){
		std::cout<<"Open Successfully\n";
	}
	myfile<<"New file";
	myfile.close();
} 
