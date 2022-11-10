#include <iostream>

void mix(int *a,int *b,int *c,int size);

int main(void){
	int size;
	std::cout<<"the length of the a,b arrays"<<std::endl;
	std::cin>>size;
	
	int arrayA[size],arrayB[size];
	std::cout<<"elements of a"<<std::endl;
	for(int i = 0;i<size;i++){
		std::cin>>arrayA[i];
	}
	std::cout<<"element of b"<<std::endl;
	for(int i = 0;i<size;i++){
		std::cin>>arrayB[i];
	}
	
	int arrayC[2*size];
	mix(arrayA,arrayB,arrayC,size);
// Cout arrayC[]	
	for(int i =0;i<(size*2);i++){
		std::cout<<arrayC[i];
		std::cout<<" ";
	}
}

void mix(int *a,int *b,int *c,int size){
	for(int i=0;i<size;i++){
		c[2*i+1] = a[i];
	}
	for(int n=0;n<size;n++){
		c[2*n] = b[n];
	}
	return;
}
