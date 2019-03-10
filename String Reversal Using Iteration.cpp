#include<iostream>
#include<string>
#include<utility>
using namespace std;
string strrev(string str){
	int l=str.length();
	for(int i=0;i<l/2;i++){
		swap(str[i],str[l-1-i]);
	}
	return str;
}
int main(){
	string s;
	cout<<"Enter the String: ";
	getline(cin,s);
	string rev=strrev(s);
	cout<<"Iterative Approach: "<<rev;
	return 0;
}
