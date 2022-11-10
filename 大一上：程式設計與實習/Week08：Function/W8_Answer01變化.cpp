// Use srand to create random character -> Problem: the scope in call function

#include <iostream>
#include <random>
#include <ctime>

char getAlphabet(void);
int checkAnswer(char *sheet,char *ans);

int main(void){
	char sheet[5],ans[5];
    std::cout<<"Input sheet\n";
	for(int i=0;i<5;i++){
		std::cin>>sheet[i];
	}
	std::cout<<std::endl;
	for(int i=0;i<5;i++){
		ans[i] = getAlphabet();
	}

    std::cout<<"The Random Answer is :"<<ans<<std::endl;
    std::cout<<"Score:"<<std::endl;
	std::cout<<checkAnswer(sheet,ans);
} 

char getAlphabet(void){
    // C++11 <random>
	std::default_random_engine generator( time(NULL) );
    std::uniform_real_distribution<float> unif(0.0, 26.0);
	int temNum = unif(generator);
	
    // In ASCII Alphabet(65~90)
    return (char)(temNum%26 + 65);
}

int checkAnswer(char *sheet,char *ans){
	int f_score = 0;
	for(int i=0;i<5;i++){
		if(sheet[i]==ans[i]){
			f_score = f_score + 20;
		}
	}
	
	return f_score;
}
