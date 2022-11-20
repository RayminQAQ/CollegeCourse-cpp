// 更改紀錄 (From 11/18 Badcode.cpp)
// 將函式的回傳型態從void改成Node*，完成了insert、print、del函式庫
// swap()未完成，在交換過程中會有排序問題

#include <iostream>
#include <cstring>

typedef struct Node{
	char m_name[20];
	int m_midterm;
	int m_final;
	int m_total;
	struct Node *next;
} Node;

Node* insert(Node* current,char name[],int midterm, int final); // head = temp
void print(Node* current);
Node* del(Node* head,int c);
Node* swap(Node* head,int a,int b);

int main(void){
	Node *head = NULL;
	
	// Input list have 4 Node
    std::cout<<"Input 4 Node"<<std::endl;
	for(int i = 0;i<4;i++){
		char m_name[20];
		int Mid,Final; 
		std::cin>>m_name>>Mid>>Final;
		head = insert(head,m_name,Mid,Final); 
	}
    print(head);

    // head = del(head,1);
    // std::cout<<"After delete()"<<std::endl;
    // print(head);
    
    head = swap(head,1,3);
    std::cout<<"After swap()"<<std::endl;
    print(head);
} 

Node* insert(Node* head,char name[],int midterm, int final){
/*  
	可以有兩種狀況：
	(1)NULL在Head內(Head沒有Next)、(2)NULL在節點的next指標內，
	因此要先進行刪選 
*/
	if(head == NULL){
		// 分枝：設立臨時的節點 temp
		Node *temp = new Node();
		strcpy(temp->m_name,name);
		temp -> m_midterm = midterm;
		temp -> m_final = final;
		temp -> m_total = midterm + final;
		temp -> next = NULL;
		
        // 使temp成為Linked list的一員，從處於最末端的current加入
		return temp;
	}else{
		// 找最後一個節點位置，此時的current存放的是最後一個Node的位址
        Node *current = head;
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
		return head; // 因為無回傳的必要
	}
}

void print(Node *current){
    std::cout<<"Output"<<std::endl;
	while(current!=NULL){
		std::cout<<(current->m_name)<<" "<<(current->m_midterm)<<" "<<(current->m_final)<<" "<<(current->m_total)<<std::endl;
		current = current->next;
	}
	return;
}

Node* del(Node* head,int c){
/* assume the head is at position 0，and Input c meaning the position want to delete */

    // 以防沒有分枝的狀況
    if(c == 0){
        std::cout<<"不可刪除head(0)"<<std::endl;
        return head;
    }else if(c == 1){
        Node *next1 = head->next;
        delete head;
        return next1;
    }else{
    // 找該分枝
        Node *current = head; // 共同指向第一個Node
        Node *previous;

        for(int i = 0;i<(c-1);i++){
            if(current == NULL){
                std::cout<<"沒有該節點存在"<<std::endl;
                return head;
            }else{
                previous = current;
                current = current->next;
            }
        }
    // 刪除該分枝
        // 改動前面的分枝的next
        previous->next = current->next;

        // 刪除 該分枝
        delete current;

        return head;
    }  
}

Node* swap(Node* head,int a,int b){
    // Let (a<b) and check for (a!=b) && (a)
    if((a==0)||(b==0)){
        std::cout<<"You cannot swap head(0)";
        return head;
    }else if(a>b){
        int temp = a;
        a = b;
        b = temp;
    }else if(a==b){return head;}

// OPERATION
    if(a == 1){
        // 找b所在的節點，並記錄上一個節點
        Node *current_b = head;
        Node *previous_b = NULL;
        for(int i=0;i<(b-1);i++){
            previous_b = current_b;
            current_b = current_b->next;
        }
        
    // swap
        // 移入a：[b-1]->[New a]->[b+1]->..，有要改前方的 [b-1]、[New a]
        current_b->next = head->next->next; // [New b]->[a+1]
        previous_b->next = head->next; // [b-1]->[New a]

        // 移入b：head->[New b]->[a+1]->...，有要改前方的 head、[New b]
        head->next = current_b->next; // [New a]->[b+1]
        return current_b; // head(in main) = current_b;
    }else{
        return head;
    }
}
