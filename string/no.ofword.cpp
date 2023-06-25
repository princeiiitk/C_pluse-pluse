#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int count=0;
    string str;
    getline(cin , str);
    for(int i=0; i<=str.size();i++){
        if(str[i]==' ' && str[i-1]!=' '){
               count++;
        }
    }
    cout<<count+1<<endl;
    return 0 ;

    }