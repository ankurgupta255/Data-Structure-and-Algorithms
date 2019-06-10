#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a[100]={};
	int n=0;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter the array Elements: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int el=0;
	cout<<"Enter the element to be found: ";
	cin>>el;
	int step=sqrt(n);
	int flag=0;
	int i=0;
	for(i=0;i<=n;i+=step){
		if(a[i]>el){
			break;
		}
		if(a[i]==el){
			cout<<"Element found at index "<<i+1;
			flag=1;
			break;
		}
	}
	if(a[i]<el){
		for(int j=i;j<n;j++){
			if(a[j]==el){
			cout<<"Element found at index "<<j+1;
			flag=1;
			break;
		}
		}
	}
	if(flag==0){
		for(int j=i;j>(i-4);j--){
			if(a[j]==el){
				cout<<"Element found at index "<<j+1;
				flag=1;
				break;
			}
		}
	}
	if(flag==0){
		cout<<"Element does not exist in the array!!";
	}
	}
