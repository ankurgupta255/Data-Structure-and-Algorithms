#include<iostream>
using namespace std;
int factorial(int x){
	int fac;
	if(x==2){
		return 2;
	}
	 return fac=x*factorial(x-1);
}
int main(){
	int num=0;
	cout<<"Enter the number: ";
	cin>>num;
	int fac=factorial(num);
	cout<<fac;
}
