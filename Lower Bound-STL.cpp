#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
  int n;
  cin>>n;
  int a[100000];
  vector<int> v;
  for(int i=0;i<n;i++){
    cin>>a[i];
    v.push_back(a[i]);
  }
  int q=0;
  cin>>q;
  int b[100000];
  for(int i=0;i<q;i++){
    cin>>b[i];
    vector<int>::iterator low = lower_bound(v.begin(), v.end(), b[i]);
    if (v[low - v.begin()] == b[i])
      cout << "Yes " << (low - v.begin() + 1) << endl;
    else
      cout << "No " << (low - v.begin() + 1) << endl;
  }
  
    return 0;
}


