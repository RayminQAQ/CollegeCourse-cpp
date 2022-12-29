#include <bits/stdc++.h>

using namespace std;

enum class majors{
	ECE = 0, EE, CS
};

majors getMajor(void){
	int temp = rand() % 3;
	if(temp==0){
		return majors::ECE;
	}else if(temp==1){
		return majors::EE;
	}else{
		return majors::CS;
	}
}

void output(majors& stu,int i){
	cout<<"Student "<<i+1<<": ";
	switch(stu){
		case majors::ECE:
			cout<<"Wonderful! Welcome to Electronic and Computer Engineering.\n";
			break;
		case majors::EE:
			cout<<"Excellent! Welcome to Electrical Engineering.\n";
			break;
		case majors::CS:
			cout<<"Amazing! Welcome to Computer Science and Information Engineering.\n";
			break;
	}
	return;
}

int main(){
	srand(time(NULL));
	majors stu[10];
	for(int i=0;i<10;i++){
		stu[i] = getMajor();
	}
	for(int i=0;i<10;i++){
		output(stu[i],i);	
	}
    return 0;
}

