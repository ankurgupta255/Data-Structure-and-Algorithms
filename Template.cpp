#include<iostream>
using namespace std;

template<class ankur>

ankur sum(ankur a, ankur b){
	return a+b;
}

int main(){
	double a=40.4;
	double b=100.5;
	double c=0;
	c=sum(a,b);
	cout<<c;
}

