#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int num=0;
	int cnt=0;
	int i=1;
	cout<<"Enter the number: ";
	cin>>num;
	while(int(num/pow(5,i))!=0){
		cnt+=int(num/pow(5,i));
		i++;
	}
	cout<<"The number of trailing zeroes in "<<num<<" Factorial is "<<cnt;
}
