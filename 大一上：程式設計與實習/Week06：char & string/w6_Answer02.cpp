#include <iostream>
#include <cstring>
#include <cctype>

int main(void){
//1
// Get string
	char str[100];
	std::cout<<"Input: "<<std::endl;
	std::cin.get(str,100);
	
// Change for the beginning
	str[0] = toupper(str[0]);
	
// Identify the ' ' 
	int times = strlen(str);
	int lastArrPosition = 0;

	for(int i = 0;i<times;i++){
		if(str[i]==' '){	//How to identify space?
			str[i+1] = toupper(str[i+1]);
			lastArrPosition = i;
		}
	} 
	
// OUTPUT
	std::cout<<str<<std::endl;
	
//2
	char strcopy[100];
	int address = 2;
	int lastArrCopyPosition = 0;
	
	strcopy[0] = str[0];
	strcopy[1] = '.';
	
	for(int i = 0;i<times;i++){
		if(str[i]==' '){	
			strcopy[address] = str[i+1];
			strcopy[address+1] = '.';
			address+=2;
			lastArrCopyPosition = i;
		}
	}
	
// the last name -> use lastArrPosition(?)
	int j = address - 2; //int j = lastArrCopyPosition; -> wrong
	for(int i = (lastArrPosition+1);i<times;i++){
		strcopy[j] = str[i];
		j++;
	}

// OUTPUT
	std::cout<<strcopy<<std::endl;
}




