#include<iostream>
using namespace std;
int main(){
	int n=0;
	cout<<"Enter the number of elements for the last row: ";
	cin>>n;
	int i=0;
	int j=0;
	int k=0;
	int l=n/2;
	int m=0;
	if(n%2==0){
		m=n/2;}
	else{
		m=(n/2)+1;
		}
	for(i=0;i<m;i++){
		j=0;
		k=0;
		for(j=0;j<l-i;j++){
			cout<<" ";
		}
		for(k=0;k<((2*i)+1);k++){
			cout<<"#";
		}
		cout<<endl;
	}}
