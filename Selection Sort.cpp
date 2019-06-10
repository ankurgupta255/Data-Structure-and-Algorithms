#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
void InsertionSort(int a[]){
	int n=0;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter the array Elements: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
		if(a[j]<a[i]){
			swap(a[j],a[i]);
		}	
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}
int main(){
	int a[100];
	InsertionSort(a);
	
}
