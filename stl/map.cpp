#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//key(uniqu) vale pair=map
//eg-1->abc
//4->vft
//order map
//internally use red,black ,tree

int main(){
    map<int,string>m;
    m[1]="abc";//log(n)
    m[4]="hhh";
    m.insert({8,"kkk"});
    map<int,string>::iterator it;
    for(it=m.begin();it!=m.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    for(auto pr:m){//log(n)
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    cout<<m.size()<<endl;
   auto pr = m.find(4);
   if(pr==m.end()){
    cout<<"no value";

   }
   else{
    cout<<(*pr).first<<" "<<(*pr).second<<endl;
   }
   m.erase(1);
    for(auto pr:m){//log(n)
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    m.clear();
     for(auto pr:m){//log(n)
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    return 0 ;
    }

