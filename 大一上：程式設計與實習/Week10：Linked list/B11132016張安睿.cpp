#include<bits/stdc++.h>

using namespace std;

struct node{
	string name;
	int midterm;
	int final;
	int total;
	node* next;
};

void print(node* current){
	cout<<"Name\tMidterm\tFinal\tTotal"<<endl;
	while(current!=NULL){
		cout<<current->name<<"\t"<<current->midterm<<"\t"<<current->final<<"\t"<<current->total<<endl;
		current=current->next;
	}
}

node* insert(node* head,string name,int midterm,int final){
	node* current=head;
	if(current==NULL){
		current=new node;
		current->name=name;
		current->midterm=midterm;
		current->final=final;
		current->total=current->midterm+current->final;
		current->next=NULL;
		return current;
	}else{
		while(current->next!=NULL){
			current=current->next;
		}
		current->next=new node;
		current=current->next;
		current->name=name;
		current->midterm=midterm;
		current->final=final;
		current->total=current->midterm+current->final;
		current->next=NULL;
		return head;
	}
}

node* del(node* head,int a){
	node* current=head;
	if(a==1){
		node* next1=current->next; 
		delete current;
		return next1;
	}else{
		node* follow;
		for(int i=0;i<a-1;i++){
			follow=current;
			current=current->next;
		}
		follow->next=current->next;
		delete current;
		return head;
	}
}

node* swap(node* head,int a,int b){
	node* currenta=head;
	node* currentb=head;
	node* followa=head;
	node* followb=head;
	node* nexta=head->next;
	if(a==1){
		for(int i=0;i<a-1;i++){
			currenta=currenta->next;
		}
		for(int i=0;i<b-1;i++){
			followb=currentb;
			currentb=currentb->next;
		}
		currenta->next=currentb->next;
		currentb->next=nexta;
		followb->next=currenta;
		return currentb;
		
	}else{
		for(int i=0;i<a-1;i++){
			followa=currenta;
			currenta=currenta->next;
		}
		for(int i=0;i<b-1;i++){
			followb=currentb;
			currentb=currentb->next;
		}
		nexta=currenta->next;
		currenta->next=currentb->next;
		currentb->next=nexta;
		followb->next=currenta;
		followa->next=currentb;
		return head;
	}
}

int main(){
	node* head=new node;
	node* current=head;
	
	cout<<"please enter the name:";
	cin>>current->name;
	cout<<"please enter the midterm:";
	cin>>current->midterm;
	cout<<"please enter the final:";
	cin>>current->final;
	current->total=current->midterm+current->final;
	for(int i=0;i<3;i++){
		current->next=new node;
		current=current->next;
		cout<<"please enter the name:";
		cin>>current->name;
		cout<<"please enter the midterm:";
		cin>>current->midterm;
		cout<<"please enter the final:";
		cin>>current->final;
		current->total=current->midterm+current->final;
	}
	current->next=NULL;
	head=insert(head,"EEE",21,32);
	print(head);
	head=del(head,2);
	print(head);
	head=swap(head,1,4);
	print(head);
}
