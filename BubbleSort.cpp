#include<iostream>
using namespace std;
void BubbleSort(int a[]){
	int n=0;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter the array Elements: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}
int main(){
	int a[100];
	BubbleSort(a);
	
}
