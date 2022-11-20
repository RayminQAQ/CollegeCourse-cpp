#include <iostream>

template <typename T>
    T minimum(T input1,T input2){
        return (input1<input2)? input1:input2;
    }


int main(void){
    int integer1,integer2;
    std::cout<<"Input two integer values: ";
    std::cin>>integer1>>integer2;
    std::cout<<"The smaller integer value is: "<<minimum(integer1,integer2)<<"\n\n";

    char char1,char2;
    std::cout<<"Input two char values: ";
    std::cin>>char1>>char2;
    std::cout<<"The smaller char value is: "<<minimum(char1,char2)<<"\n\n";

    double double1,double2;
    std::cout<<"Input two double values: ";
    std::cin>>double1>>double2;
    std::cout<<"The smaller double value is: "<<minimum(double1,double2)<<"\n\n";
    
}
