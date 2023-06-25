#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int count=0 ;

    string str;
    getline(cin,str);
    for(int i=0 ; i<str.size();i++){
        count++;
    }
    cout<<str.size()<<" "<<count<<endl;

    return 0;
}