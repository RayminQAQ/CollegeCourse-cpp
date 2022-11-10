// Adding Right&Left shift, rather than changing the character.

#include <iostream>
#include <cstring>

void shiftLeftString(char *str,int Leftshift);
void shiftRightString(char *str,int Rightshift);

int main(void){
	char array[10000];
	int Leftshift,Rightshift;
	std::cout<<"string"<<std::endl;
	std::cin>>array; // Important
	std::cout<<"Leftshift"<<std::endl;
	std::cin>>Leftshift;
    std::cout<<"Rightshift"<<std::endl;
    std::cin>>Rightshift;

	shiftLeftString(array,Leftshift);
    shiftRightString(array,Rightshift);
}

void shiftLeftString(char *str,int Leftshift){
    char tem[10000];

    Leftshift %= strlen(str);

    int count = 0;
    for(int i=Leftshift;i<strlen(str);i++){
        tem[count] = str[i];
        count++;
    }
    for(int i=0;i<Leftshift;i++){
        tem[count] = str[i];
        count++;
    }

    // Questionable: the memory will be throw? (YES, address of stack memory associated with local variable 'tem' cannot return
    std::cout<<"the new leftshift string is "<<tem<<std::endl;
}

void shiftRightString(char *str,int Rightshift){
    char tem[10000];

    Rightshift %= strlen(str);
    int count = 0;
    for(int i=Rightshift;i<strlen(str);i++){
        tem[i] = str[count];
        count++;
    }
    for(int i=0;i<Rightshift;i++){
        tem[i] = str[count];
        count++;
    }

    std::cout<<"the new rightshift string is "<<tem;
}
