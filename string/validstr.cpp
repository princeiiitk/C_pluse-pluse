#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    getline(cin , str);
    for(int i=1 ; i<=str.size() ; i++){
        if(!(str[i]>=65 && str[i]<=90 && str[i]>=97 && str[i]<=122)){
            cout<<"string is not valid"<<endl;
            return 0 ;
        }
       
        }
         
            cout<<" valide"<<endl;
        
    

return 0; 
}