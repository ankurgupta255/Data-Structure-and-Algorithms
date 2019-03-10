#include<iostream>
#include<string>
#include<utility>
using namespace std;
string strrev(string s){
	string rev;
	int l=s.length();
	int i;
	if(i==l){
		return rev;
	}
	rev[i]=s[l-i-1];
	i++;
}
int main(){
	string s;
	cout<<"Enter the String: ";
	getline(cin,s);
	string rev=strrev(s);
	cout<<"Recursive Approach: "<<rev;
	return 0;
}
