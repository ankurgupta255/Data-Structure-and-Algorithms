#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n=0;
	int a[100]={};
	cout<<"Enter the no. of array elements: ";
	cin>>n;
	cout<<"Enter the array elements: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n-1;i+=2){
		swap(a[i],a[i+1]);
	}
	cout<<"The Wave Sorted array is: ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
