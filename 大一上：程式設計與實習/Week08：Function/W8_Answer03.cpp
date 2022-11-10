#include <iostream>
#include <cstring>

void shiftString(char *str,int shift);
int main(void){
	char array[10000];
	int shift;
	std::cout<<"string"<<std::endl;
	std::cin>>array; // Important
	std::cout<<"shift"<<std::endl;
	std::cin>>shift;
	shiftString(array,shift);
}

void shiftString(char *str,int shift){
	for(int i=0;i<strlen(str);i++){
		shift %= 26;
		str[i] = str[i] + shift;
		if('A'>str[i]){
			str[i] = str[i] + 26;
		}else if(str[i]>'Z'){
			str[i] = str[i] - 26;
		}
	/* Slower: do not operate on shift
		// A: 65 , Z: 90 -> -26
		// number of str[i] + shift, then 
		str[i] = str[i] + shift;
		while(('A'>str[i])|| (str[i]>'Z')){
			str[i] = str[i] - 26;
		}
	*/
		std::cout<<str[i];
	}
}
