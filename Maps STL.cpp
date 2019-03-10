#include<iostream>
#include<map>
#include<string>
#include<utility>
using namespace std;
int main(){
    map<string, int> phone_book;
    map<string, int>::iterator p;
    int a[100000];
    int l=0;
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++){
        int c=0;
        cin>>c;
        string str;
        cin>>str;
        if(c==1){
            int marks;
            cin>>marks;
            p=phone_book.find(str);
            if(p==phone_book.end()){
                phone_book.insert(make_pair(str, marks));
            }
            else{
                p->second+=marks;
            }
            continue;
        }
        else if(c==2){
            p=phone_book.find(str);
            phone_book.erase(str);
            continue;
        }
        else if(c==3){
            p=phone_book.find(str);
            a[l]=p->second;
            l++;
            continue;
        }
    }
    for(int i=0;i<l;i++){
        cout<<a[i]<<endl;
    }
}
