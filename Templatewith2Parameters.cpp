#include<iostream>
using namespace std;

template<class first, class second>

second small(first x, second y){
	return(x<y?x:y);
}

int main(){	
	int x=645;
	double y=54.53;
	cout<<small(x,y)<<endl;
	
}
