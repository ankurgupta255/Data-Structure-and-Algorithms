#include<iostream>
#include<vector>
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
int fibonMaster(int n){
	vector<int>v;
	return fibon(n);
	for(int i=0;i<v.size();i++){
		if(v[i]==n){
			return n;
		}
		else{
			v.push_back(fibon(n-1)+fibon(n-2));
			return v.back();
		}
	}
}
int main(){
	int num=0;
	while(num!=1){
	cin>>num;
	int f=fibon(num);
	cout<<"Recursive Approach: "<<f<<endl;
	int g=fibonMaster(num);
	cout<<"Dynamic Approach: "<<g<<endl;
}
return 0;
}
