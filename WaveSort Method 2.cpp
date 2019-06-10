#include<iostream>
using namespace std;
void WaveSort(int a[],int n){
	for(int i=0;i<n;i+=2){
		if(i>0 && a[i-1]>a[i]){
			swap(a[i-1],a[i]);
		}
		if(i<n-1 && a[i+1]>a[i]){
			swap(a[i],a[i+1]);
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int n=0;
	int a[100]={};
	cout<<"Enter the no. of array elements: ";
	cin>>n;
	cout<<"Enter the array elements: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	WaveSort(a,n); 
}
