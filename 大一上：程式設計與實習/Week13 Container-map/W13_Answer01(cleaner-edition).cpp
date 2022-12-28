#include <iostream>
#include <map>

int main()
{
    std::map<char,int> map;
    for(int i=0;i<13;i++){
        map['a'+ 2*i] = 13 - i;
        map['a'+ 2*i + 1] = 13 - i;
    }
    
    std::cout<<"Please enter a character to find the corresponding value: ";
    char c;
    std::cin>>c;
    std::cout<<map[c]<<"\n";
}
