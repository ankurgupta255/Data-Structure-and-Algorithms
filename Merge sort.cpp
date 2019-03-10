#include<iostream>
using namespace std;
int main(){
	int a[1000];
	int b[1000];
	int c[2000];
	int n1=0;
	int n2=0;
	cin>>n1;
	cin>>n2;
	for(int i=0;i<n1;i++){
		cin>>a[i];
	}
	for(int i=0;i<n2;i++){
		cin>>b[i];
	}
	int j=0;
	int k=0;
	int i=0;
	int max=0;
	int min=0;
	if(n1>n2){
		max=n2;
		min=n1;
	}
	else{
		max=n1;
		min=n2;
	}
	while(j<n1 && k<n2){
		if(a[j]<b[k]){
			c[i]=a[j];
			j++;
			i++;
		}
		else{
			c[i]=b[k];
			k++;
			i++;
		}
	}
	while(j<n1){
		c[i]=a[j];
		i++;j++;
	}
	while(k<n2){
		c[i]=b[k];
		i++;k++;
	}
	for(int i=0;i<n1+n2;i++){
		cout<<c[i]<<" ";
	}
}
