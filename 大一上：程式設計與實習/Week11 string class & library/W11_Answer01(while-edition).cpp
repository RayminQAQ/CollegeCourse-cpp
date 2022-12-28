/*  2022/12/28, Using str.length() with for Loop to operate is another way */
#include <iostream>
#include <string>

int main(void){
    std::string str;
    std::getline(std::cin,str);
    str += '\n';
    int i=0;
    while(str[i]!='\n'){
        if(str[i]!='/'){
            std::cout<<str[i];
        }else{
            std::cout<<"\n";
        }
        i++;
    }
}