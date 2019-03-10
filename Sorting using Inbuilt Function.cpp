#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n=0;
	cout<<"Enter the number of digits: ";
	cin>>n;
	char a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
