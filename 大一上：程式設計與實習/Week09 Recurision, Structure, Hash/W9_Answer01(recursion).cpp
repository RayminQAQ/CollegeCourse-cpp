// Can try using bitwise operation
#include <iostream>

int Collatz_conjecture(int num){
    if(num==1){
        return 0;
    }else if((num%2)==1){ // Odd
        num = num*3 + 1;
        return 1+Collatz_conjecture(num);
    }else if((num%2)==0){ // Even
        num = num / 2;
        return 1+Collatz_conjecture(num);
    }
}

int main(void){
    int Input;
    std::cin>>Input;
    std::cout<<Collatz_conjecture(Input);
}