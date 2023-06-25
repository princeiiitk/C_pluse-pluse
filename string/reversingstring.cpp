#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    getline(cin , str);
    string str2;
    int n=str.size();
    cout<<n<<endl;
    for(int i=n ; i>=0 ; i--){
        str2=str2+str[i];
    }
    cout<<str2<<endl;
    return 0;

    }
