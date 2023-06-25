#include<iostream>
#include<string.h>
using namespace std ;
int main(){
    pair<int , int >p1;
    p1={1,2};
    cout<<p1.first<<" "<<p1.second<<endl;
    int n;
    cin>>n;
    pair<int ,string>p2[n];
    for(int i=0 ; i<n ;i++){
        cin>>p2[i].first>>p2[i].second ;

    }
     for(int i=0 ; i<n ;i++){
        cout<<p2[i].first<<" "<<p2[i].second<<endl;

    }

    return 0 ;
}