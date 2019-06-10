#include<iostream>
using namespace std;
int  Merge(int a[],int l, int m, int r){
		int left[100]={};
		int right[100]={};
		int s1=0;
		int s2=0;
		for(int i=l;i<=m;i++){
			left[s1]=a[i];
			s1++;
		}
		for(int j=m+1;j<=r;j++){
			right[s2]=a[j];
			s2++;
		}
		int le=0;
		int ri=0;
		int x=l;
		while(le<s1 && ri<s2){
			if(left[le]<right[ri]){
				a[x]=left[le];
				x++;
				le++;
			}
			else{
				a[x]=right[ri];
				x++;
				ri++;
			}
		}
		while(le<s1){
			a[x]=left[le];
			x++;
			le++;
		}
		while(ri<s2){
			a[x]=right[ri];
			x++;
			ri++;
		}
	}
	void MergeSort(int a[],int l, int r){
		if(l<r){
			int m=(l+r)/2;
			MergeSort(a,l,m);
			MergeSort(a,m+1,r);
			Merge(a,l,m,r);
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
	MergeSort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}
