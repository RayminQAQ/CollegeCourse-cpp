#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

void print(Node* head){
	while(head!=NULL){
		cout << head->data << " ";
		head=head->next;
	}
	cout << endl;
}

Node* insert(Node* head,int data){
	Node* node=new Node();
	node->data=data;
	node->next=NULL;
	Node* current=head;
	if(head==NULL){
		return node;
	}else{
		while(current->next!=NULL){
			current=current->next;
		}
		current->next=node;
		return head;
	}
	
}

Node* swap(Node* head,int a,int b){
	Node *x=head, *prevx=NULL;
	a--;
	b--;
	while(a--){
		prevx=x;
		x=x->next;
	}
	Node *y=head, *prevy=NULL;
	while(b--){
		prevy=y;
		y=y->next;
	}
	
	if(prevy==NULL){
		head=x;
	}else{
		prevy->next=x;
	}
	
	if(prevx==NULL){
		head=y;
	}else{
		prevx->next=y;
	}
	
	Node *temp=x->next;
	x->next=y->next;
	y->next=temp;
	return head;
}

Node* del(Node* head,int c){
	c--;
	if(c==0){
		head=head->next;
		return head;
	}else{
		Node *train=head, *prev=NULL;
		while(c--){
			prev=train;
			train=head->next;
		}
		prev->next=train->next;
		return head;
	}
}
int main(){
	Node* head=NULL;
	head=insert(head,1);
	head=insert(head,2);
	head=insert(head,3);
	head=insert(head,4);
	print(head);
	head=swap(head,2,3);
	print(head);
	head=del(head,2);
	print(head);
	
	return 0;
}