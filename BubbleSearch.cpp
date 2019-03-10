#include<iostream>
using namespace std;
int main(){
	int a[100];
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
		int med=0;
		int beg=0;
		int end=n;
		int flag=0;
		while(a[med]!=0){
			med=(beg+end)/2;
		if(el==a[med]){
			cout<<"Element found at index "<<med+1;
			flag=1;
			break;
		}
		else if(el<med){
			end=med-1;
		}
		else if(el>med){
			beg=med+1;
		}
	}
	if(flag==0){
		cout<<"Element not found";
	}
	}
