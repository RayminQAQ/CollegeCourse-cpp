#include <iostream>

int GCDnum = 0;


void swap(int& a,int &b){
	if(a>b){
		return;
	}else{
		int tem;
		tem = a;
		a = b;
		b = tem;
		return;
	}
}

void GCD(int &a,int &b){
	
	a = a%b;
	if(a==0){
		GCDnum = b;
		return;
	}
	
	b = (b%a);
	if(b==0){
		GCDnum = a;
		return;
	}
	
	//recursion to check
	GCD(b,a);
}


int main(void){
	//input
	int a;
	int b; 
	std::cout<<"Two Input is ";
	std::cin>>a>>b;

	//make a>b
	swap(a,b);
	// check a>b std::cout<<a<<b;
	
	//forLCM
	int c = a;
	int d = b;
	
	
	//GCD
	GCD(a,b);
	std::cout<<"GCD = "<<GCDnum<<std::endl; 
	
	//LCM
	std::cout<<"LCM = "<<(c*d)/GCDnum;
}
