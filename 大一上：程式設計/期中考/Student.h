#include <string>
#include <iostream>

class Student{
public:
	explicit Student(std::string nameInput,float gpaInput){
		m_name = nameInput;
		m_gpa = gpaInput;
	};
	
	float getScore(void){
		return m_gpa;
	}
	
	std::string getName(void){
		return m_name;
	}
	
private:
	std::string m_name;
	float m_gpa;
};
