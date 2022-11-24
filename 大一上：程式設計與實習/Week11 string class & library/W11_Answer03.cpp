#include <iostream>

void flatten(std::string str, int list[]);

int main(void){
// Input
	int times; 
	std::cout<<"The number of strings: ";
	std::cin>>times;
	std::cout<<std::endl;
	
	// Use count to store the total of the Alphabet exist
	int count[26] = {0};
	for(int i = 0;i<times;i++){
		std::cout<<"String"<<i+1<<std::endl;
		// Input only have a~z
		std::string str;
		std::cin>>str; // You can use *getline(std::cin,str)* too, but you have to add *std::cin.ignore()* 
		
		int currentAlpabet[26] = {0};
		flatten(str,currentAlpabet);
		
		for(int i = 0;i<26;i++){
			if(currentAlpabet[i]==1){
				count[i]++;
			}
		}	
	}
	// Retreive Flag
	int common = 0;
	for(int i = 0;i<26;i++){
		if(count[i]==times){
			common++;
		}
	}
	std::cout<<common<<" characters exist in each string";
}

void flatten(std::string str, int list[]){
	// Record all the alphabet
	for(int i = 0;i<str.length();i++){
		if((97<=str[i]) && (str[i]<=122)){
			int shift = str[i] - 97; 
			list[shift]++;
		}
	}
	// Flatten list_element into 0 or 1
	for(int i = 0;i<26;i++){
		if(list[i]>0){
			list[i] = 1;
		}
	}
	return;
}
