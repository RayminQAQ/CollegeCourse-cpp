#include <iostream>
#include <vector>
#include <random> 
#include <ctime>

int main(void){
    std::default_random_engine generator( time(NULL) );
    std::uniform_int_distribution<int> unif(1, 6);
    std::vector<int> list(12); // vector is initialize to 0 by default
    for(int i=0;i<36000000;i++){
        int temp = unif(generator) + unif(generator) - 2;
        list[temp] += 1;
    }
    for(int i=0;i<11;i++){
        std::cout<<i+2<<" appears\t"<<list[i]<<"times"<<std::endl;
    }
}