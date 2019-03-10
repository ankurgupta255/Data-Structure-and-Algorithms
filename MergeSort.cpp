#include<iostream>
using namespace std;
void merge(int a[],int n){
		int left[100];
		int right[100];
		int s1=0;
		int s2=0;
		for(int i=0;i<n/2;i++){
			left[i]=a[i];
			s1++;
		}
		for(int i=n/2,q=0;i<n;i++,q++){
			right[q]=a[i];
			s2++;
		}	
		int result[200];
		int l=0;
		int r=0;
		int x=0;
		while(l<s1 && r<s2){
			if(left[l]<right[r]){
				result[x]=left[l];
				x++;
				l++;
			}
			else{
				result[x]=right[r];
				x++;
				r++;
			}
		}
		while(l<s1){
			result[x]=left[l];
			x++;
			l++;
		}
		while(r<s2){
			result[x]=right[r];
			x++;
			r++;
		}
		for(int i=0;i<s1+s2;i++){
			cout<<result[i]<<" ";
		}
	}

void MergeSort(int a[]){
	int n=0;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter the array Elements: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==1){
		cout<<a[0];
	}
	else{
		 merge(a,n);
	}
}

int main(){
	int a[2100];
	MergeSort(a);
}
