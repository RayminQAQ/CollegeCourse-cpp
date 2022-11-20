#include <iostream>

int gcd(int x,int y);
void swap(int &x,int &y);

int main(void){
    int Num1,Num2;
    std::cout<<"Enter two integers: ";
    std::cin>>Num1>>Num2;
    std::cout<<"Greatest common divisor of "<<Num1<<" and "<<Num2<<" is "<<gcd(Num1,Num2)<<std::endl;
}

void swap(int &x,int &y){
    if(x>=y){
        return;
    }else{
        int temp = y;
        y = x;
        x = temp;
    }
}

int gcd(int x,int y){
    swap(x,y);
    if(y==0){
        return x;
    }else{
        return gcd(y,x%y);
    }
}