#include <iostream>
#include <cstring>

typedef struct Node{
	char m_name[20];
	int m_midterm;
	int m_final;
	int m_total;
	struct Node *next;
} Node;

void insert(Node* current,char name[],int midterm, int final);
void print(Node* current);
void swap(Node* head,int a,int b);
void del(Node* head,int c);

int main(void){
	Node *head = NULL;
	
	// Input list have 4 Node
	for(int i = 0;i<1/*4*/;i++){
		char m_name[20];
		int Mid,Final; 
		std::cin>>m_name>>Mid>>Final;
		insert(head,m_name,Mid,Final);
	}
	std::cout<<(head->m_name)<<" "<<(head->m_midterm)<<" "<<(head->m_final)<<std::endl;
} 

void insert(Node* current,char name[],int midterm, int final){
/* 
	可以有兩種狀況：
	(1)NULL在Head內(Head沒有Next)、(2)NULL在節點的next指標內，
	因此要先進行刪選 
*/
	if(current == NULL){
		// 分枝：設立臨時的節點 temp
		Node *temp = new Node();
		strcpy(temp->m_name,name);
		temp -> m_midterm = midterm;
		temp -> m_final = final;
		temp -> m_total = midterm + final;
		temp -> next = NULL;
		// 使temp成為Linked list的一員，從處於最末端的current加入
		current = temp;
		return;
	}else{
		// 找最後一個節點位置，此時的current存放的是最後一個Node的位址
		while(current->next != NULL){
			current = current->next;
		}

		// 分枝：設立臨時的節點 temp
		Node *temp = new Node();
		strcpy(temp->m_name,name);
		temp -> m_midterm = midterm;
		temp -> m_final = final;
		temp -> m_total = midterm + final;
		temp -> next = NULL;

		// 使temp成為Linked list的一員，從處於最末端的current加入
		current->next = temp;
		return;
	}
}

void print(Node *current){
	while(current!=NULL){
		std::cout<<(current->m_name)<<" "<<(current->m_midterm)<<" "<<(current->m_final)<<" "<<(current->m_total)<<std::endl;
		current = current->next;
	}
	return;
}
