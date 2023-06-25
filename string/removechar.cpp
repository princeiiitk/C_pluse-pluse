#include<iostream>
#include<string.h>
using namespace std;
string remove(string str){
    string aftremove;
    
    for(int i=0 ; i<str.size() ; i=i+2){
        
   aftremove=aftremove+str[i];
    
    }
    return aftremove;
}
int main(){
    string str;
    getline(cin , str);
    string str2=remove(str);
    // for(int i=0 ;i<str2.size();i++){
    //     cout<<"\n";
    cout<<str2<<endl;

   // }
return 0;
}