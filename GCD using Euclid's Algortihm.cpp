#include<iostream>
using namespace std;
int gcd(int a, int b){
	if(a!=0 && b!=0){
		gcd(b%a,a);
	}
	else{
	return max(a,b);	
	}
}
int main(){
	cout<<"ENter the smaller and larger numbers respectively: ";
	int n1,n2=0;
	cin>>n1>>n2;
	cout<<"The GCD of these two numbers is: "<<gcd(n1,n2);
	cout<<"\nThe LCM of these two numbers is: "<<((n1*n2)/gcd(n1,n2));
	return 0;
}
