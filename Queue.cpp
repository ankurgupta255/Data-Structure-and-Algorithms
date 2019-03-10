#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
struct node* front;
struct node* rear;
void peek(){
	node*temp;
	temp=new node;
	temp=front;
	cout<<temp->data<<endl;
}
void enqueue(int x){
	node* temp;
	temp=new node;
	temp->data=x;
	if(rear==NULL && front==NULL){
	rear=temp;
	front=temp;
	}
	else{
		rear->next=temp;
		rear=temp;
	}
}
void dequeue(){
	node* temp;
	temp=new node;
	temp=front;
	temp=temp->next;
	front=temp;
}
void print(){
	node* temp;
	temp=new node;
	temp=front;
	while(temp!=rear){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
int main(){
	front=NULL;
	rear=NULL;
	int c=0;
	cout<<"Enter Choice: ";
	cin>>c;
	while(c!=0){
	if(c==1){
		cout<<"Enter the number to be inserted at rear: ";
		int num;
		cin>>num;
		enqueue(num);
	}
	else if(c==2){
		dequeue();
	}
	else if(c==3){
		peek();
	}
	else if(c==4){
		print();
	}
	cout<<"Enter the choice: ";
	cin>>c;
}
}
