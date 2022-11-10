#include <iostream>

int main(void){
//create odd number
    int oddNum;
    do{
        std::cout<<"Input: ";
        std::cin>>oddNum;
    }while((oddNum%2)==0);
    
//create tree

    //top one -> 5row
    int T = (oddNum/2)+1;
    
    for(int i=1;i<=T;i++){
        for(int j = 1;j<=T-i;j++){
            std::cout<<" ";
        }
        for(int k = 2;k<=(2*i);k++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }

    //button one -> 4row
    int N = oddNum - T;

    for(int i=1;i<=N;i++){
        for(int j = 1;j<=i;j++){
            std::cout<<" ";
        }
        for(int r = 0;r<=2*N-2*i;r++){ //buggy
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}