#include <iostream>

class Rectangle{
public:
	explicit Rectangle(int length,int width){
		m_length = length;
		m_width = width;
	}
	
	void getArea(void){
		std::cout<<"Area of the rectangle is: "<<m_length*m_width;
	}
	
private:
	int m_length,m_width;
};
