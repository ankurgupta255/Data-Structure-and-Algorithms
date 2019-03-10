#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
struct node* top;
void push(int x){
node* temp;
temp=new node;
temp->data=x;
if(top!=NULL){
temp->next=top;
}
top=temp;	
}
void pop(){
	if(top==NULL){
		cout<<"Nothing to pop Bitch"<<endl;
	}
	else{
node* temp;
temp=top;
top=top->next;
delete temp;
}
}
void print(){
	if(top!=NULL){
	while(top->next!=NULL){
		cout<<top->data<<endl;
		top=top->next;
	}
}
else{
	cout<<"STack is empty";
}
}
void peek(){
	if(top!=NULL){
	cout<<top->data<<endl;
}
else{
	cout<<"Top is empty";
}
}
void isempty(){
	if(top==NULL){
		cout<<"Empty"<<endl;
	}
	else{
		cout<<"Not Empty"<<endl;
	}
}
int main(){
	top=NULL;
	int c=0;
	cout<<"Enter Choice: ";
	cin>>c;
	while(c!=0){
	if(c==1){
		cout<<"Enter the number to be inserted: ";
		int num;
		cin>>num;
		push(num);
	}
	else if(c==2){
		pop();
	}
	else if(c==3){
		peek();
	}
	else if(c==4){
		print();
	}
	else if(c==5){
		isempty();
	}
	cout<<"Enter the choice: ";
	cin>>c;
}
}
