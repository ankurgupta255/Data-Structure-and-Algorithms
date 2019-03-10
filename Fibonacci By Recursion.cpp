#include<iostream>
using namespace std;
int fibon(int x){
	if(x==0){
		return 0;
	}
	else if(x==1){
		return 1;
	}
	return fibon(x-1) + fibon(x-2);
	
}
int main(){
	int num=0;
	while(num!=1){
	cin>>num;
	int f=fibon(num);
	cout<<f<<endl;
}
}
