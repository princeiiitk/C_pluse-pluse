#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
void printvec(vector<int>v){
   cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
      cout<<v[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0 ; i<n; i++){
      int x;
      cin>>x;
      v.push_back(x);
      
      }
      printvec(v);
   
    return 0 ;
}