#include <iostream>

int checkAnswer(char *sheet,char *ans);

int main(void){
	char sheet[5],ans[5];
	for(int i=0;i<5;i++){
		std::cin>>sheet[i];
	}
	std::cout<<std::endl;
	for(int i=0;i<5;i++){
		std::cin>>ans[i];
	}
	int score = checkAnswer(sheet,ans);
	std::cout<<score;
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
