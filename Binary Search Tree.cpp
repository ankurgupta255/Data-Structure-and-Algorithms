#include<iostream>
#include<queue>
#include<vector>
using std::vector;
using namespace std;
using std::queue;
struct node{
	int data;
	node* left;
	node* right;
};
struct node* root;

void insert(int x){
	node* temp;
	temp=new node;
	temp->data=x;
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL){
		root=temp;
	}
	else{
		node* curr;
		curr=new node;
		curr=root;
		while(true){
			if(x<curr->data){
				if(curr->left==NULL){
					curr->left=temp;
					break;
				}
				curr=curr->left;
			}
			else{
				if(curr->right==NULL){
					curr->right=temp;
					break;
				}
				curr=curr->right;
			}
		}
	}
}
void lookup(int x){
	node* temp;
	temp=new node;
	temp=root;
	int flag=0;
	if(root==NULL){
		cout<<"Empty Tree"<<endl;
	}
	else{
		while(temp!=NULL){
			if(x<temp->data){
				temp=temp->left;
			}
			else if(x>temp->data){
			temp=temp->right;	
			}
			else{
				cout<<"Element Found."<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0){
			cout<<"Element Not Found. :("<<endl;
		}
	}
}
void remove(int x){
	node* temp;
	temp=new node;
	temp=root;
	if(root==NULL){
		cout<<"Tree is empty";
	}
	else{
		node* par;
		par =new node;
		par=NULL;
		if(x<temp->data){
			par=temp;
			temp=temp->left;
		}
		else if(x>temp->data){
			par= temp;
			temp=temp->right;
		}
		else if(x==temp->data){
			if(temp->right==NULL){
				if(par==NULL){
					root=temp->left;
				}
				else{
					
				}
			}
		}
	}
}
void BFS(){
	node* temp;
	temp=new node;
	temp=root;
	int a[100];
	int i=0;
	queue<node*>myq;
	myq.push(temp);
	while(myq.size()>0){
		temp=myq.front();
		myq.pop();
		a[i]=temp->data;
		i++;
		if(temp->left!=NULL){
			myq.push(temp->left);
		}
		if(temp->right!=NULL){
			myq.push(temp->right);
		}
	}
	for(int j=0;j<i;j++){
		cout<<a[j]<<" ";
	}
	cout<<endl;
}
void BFSR(queue<node*>myqr,vector<int>a){
	if(!myqr.size()){
	for(int j=0;j<a.size();j++){
		cout<<a[j]<<" ";
	}	
	}
		node* temp;
		temp=new node;
		temp=myqr.front();
		myqr.pop();
		a.push_back(temp->data);
		if(temp->left!=NULL){
			myqr.push(temp->left);
		}
		if(temp->right!=NULL){
			myqr.push(temp->right);
		}
		
}
vector<int> Inorder(node* temp,vector<int>a){
	if(temp->left!=NULL){
		Inorder(temp->left,a);
	}
	a.push_back(temp->data);
	cout<<temp->data<<" ";	
	if(temp->right!=NULL){
		Inorder(temp->right,a);
	}
	return a;
}
vector<int> Postorder(node* temp,vector<int>a){
	
	if(temp->left!=NULL){
		Postorder(temp->left,a);
	}
		
	if(temp->right!=NULL){
		Postorder(temp->right,a);
	}
	a.push_back(temp->data);
	cout<<temp->data<<" ";
	return a;
}
vector<int> Preorder(node* temp,vector<int>a){
	a.push_back(temp->data);
	cout<<temp->data<<" ";
	if(temp->left!=NULL){
		Preorder(temp->left,a);
	}
		
	if(temp->right!=NULL){
		Preorder(temp->right,a);
	}
	return a;
}

vector<int> DFSIO(node*,vector<int>v){
	return Inorder(root,v);	
}
vector<int>  DFSPR(node*,vector<int>v){
	return Preorder(root,v);	
}
vector<int>  DFSPO(node*,vector<int>v){
	return Postorder(root,v);	
}

int main(){
	root=NULL;
	int c=0;
	cout<<"Enter Choice: ";
	cin>>c;
	while(c!=0){
	if(c==1){
		cout<<"Enter the number to be inserted : ";
		int num;
		cin>>num;
		insert(num);
	}
	else if(c==2){
		cout<<"Enter the number to be looked for: ";
		int num;
		cin>>num;
		lookup(num);
	}
	else if(c==3){
		cout<<"Enter the number to be deleted: ";
		int num;
		cin>>num;
		remove(num);
	}
	else if(c==4){
		BFS();	
	}
	else if(c==5){
		node*temp;
		temp=new node;
		temp=root;
		queue<node*>myqr;
		myqr.push(temp);
		vector<int>v;
		BFSR(myqr,v);
	}
	else if(c==6){
		vector<int>v;
		v=DFSIO(root,v);	
		cout<<endl;
	}
	else if(c==7){
		vector<int>v;
		v=DFSPO(root,v);	
		cout<<endl;	
	}
	else if(c==8){
		vector<int>v;
		v=DFSPR(root,v);	
		cout<<endl;	
	}
	cout<<"Enter the choice: ";
	cin>>c;
}
}
