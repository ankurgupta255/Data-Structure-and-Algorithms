#include<iostream>
using namespace std;
void SelectionSort(int a[]){
	int n=0;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter the array Elements: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int index=0;
		int min=a[i];
		for(int j=i;j<n;j++){
			if(a[j]<=min){
				min=a[j];
				index=j;
			}
		}
		int temp=a[i];
		a[i]=min;
		a[index]=temp;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<", ";
	}
}
int main(){
	int a[100];
	SelectionSort(a);
	
}
