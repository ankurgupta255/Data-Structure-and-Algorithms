#include<iostream>
using namespace std;
int  Quick(int a[],int l, int r){
		int pi=a[r];
		int i=l-1;
		for(int j=l;j<=r-1;j++){
			if(a[j]<=pi){
				i++;
				swap(a[i],a[j]);
			}
		}
		swap(a[i+1],a[r]);
		return i+1;
	}
	void QuickSort(int a[],int l, int r){
		if(l<r){
			int pi=Quick(a,l,r);
			QuickSort(a,l,pi-1);
			QuickSort(a,pi+1,r);
			Quick(a,l,r);
		}	
	}
	
int main(){
	int a[200]={};
	int n=0;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter the array Elements: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	QuickSort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}
