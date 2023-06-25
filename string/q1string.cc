#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str1="ABCDE";
    string str2="EDCBA";
    for(int i=1;i<=str2.size() ; ){
          for(int j=str1.size(); j>=0 ;){
            if(str2[i]==str1[j]){
                   i++;
                   j--;
                cout<<"true"<<endl;
            }
          }    
    }
    return 0;
    }
    