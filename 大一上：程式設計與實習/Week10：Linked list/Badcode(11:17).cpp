#include <iostream>
#include <cstring>

typedef struct Node{
	char m_name[20];
	int m_midterm;
	int m_final;
	int m_total;
	struct Node *next;
} Node;

void insert(Node* head,char name[],int midterm, int final);
void print(Node* head);
void swap(Node* head,int a,int b);
void del(Node* head,int c);

int main(void){
	Node *head = new Node();
	head -> next = NULL;
	
	// Input list have 4 Node
	for(int i = 0;i<1/*4*/;i++){
		char m_name[20];
		int Mid,Final; 
		std::cin>>m_name>>Mid>>Final;
		insert(head,m_name,Mid,Final);
	}
	print(head);
} 

// Checking
void insert(Node* head,char name[],int midterm, int final){
	
// Get into the temp(Node) to store into list
	Node *temp = new Node();	
	
	int Sum = midterm + final;

	strcpy(temp->m_name,name);
	temp -> m_midterm = midterm;
	temp -> m_final = final;
	temp -> m_total = Sum;
	temp -> next = NULL;
	
// Find the last list, and add temp into head(�^�h�Ʋ�) -> have wrong before
	Node *current = head;
	while((current->next)!=NULL){
		current = current->next;
	} 
	current -> next = temp;
	return;
}

// 
void print(Node* head){
//	Node* tempRoot = head;
//	tempRoot = tempRoot->next;
//	std::cout<<(tempRoot->m_name)<<(tempRoot->m_midterm)<<(tempRoot->m_final)<<(tempRoot->m_total)<<std::cout;
//	while(tempRoot->next != NULL){
//		std::cout<<(tempRoot->m_name)<<(tempRoot->m_midterm)<<(tempRoot->m_final)<<(tempRoot->m_total)<<std::cout;
//		tempRoot = tempRoot->next;
//	} 	
// Notice the first is Node isn't a ptr point at Node

	for(Node *current = head->next; current != NULL ; current = current->next){
		std::cout<<(current->m_name)<<(current->m_midterm)<<(current->m_final)<<(current->m_total)<<std::endl;
	}
	
	return;
}

