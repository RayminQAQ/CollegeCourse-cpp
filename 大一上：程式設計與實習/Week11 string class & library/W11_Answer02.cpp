#include <iostream>

int main(void){
	// A array that store the total number of each characher(A~Z)
	int count[26] = {0};
	std::string str;
	getline(std::cin,str);
	for(int i = 0;i<str.length();i++){
		if((65<=str[i]) && (str[i]<=90)){
			int shift = str[i] - 65; 
			count[shift]++;
		}else if((97<=str[i]) && (str[i]<=122)){
			int shift = str[i] - 97; 
			count[shift]++;
		}else{
			continue;
		}
	}
	// Check for count
	for(int i = 0;i<26;i++){
		if(count[i]==0){
			std::cout<<"Not pangram"<<std::endl;
			return 0;
		}
	}
	std::cout<<"pangram"<<std::endl;
	return 0;
}
