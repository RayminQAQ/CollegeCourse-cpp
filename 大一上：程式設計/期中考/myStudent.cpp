#include <iostream>
#include <string>
#include "Student.h" // Class Student

int main(void){
	Student s1{"Amy",3.5};
	Student s2{"Bruce",4};
	Student s3{"Chris",2.5};
		
	float s1Num = s1.getScore();
	float s2Num = s2.getScore();
	float s3Num = s3.getScore();
		
	if((s1Num>s2Num)&&(s1Num>s3Num)){
		std::cout<<s1.getName();
	}else if((s2Num>s1Num)&&(s2Num>s3Num)){
		std::cout<<s2.getName();
	}else{
		std::cout<<s3.getName();
	}

}
