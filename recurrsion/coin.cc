#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int change(int *coin, int amt){
    int i=0;
  
if(amt==0){
    return 1 ;
}

for(  ; i<3 ; i++){
   
    int new_amt=amt-coin[i];
    std::cout<<new_amt<<endl;
    change(coin,new_amt);
}

return -1;
}
int main(){
    int amt;
    std::cin>>amt;
    int coin[3];
    std::cout<<"enter available coin"<<endl;
    for (int i = 0; i < 3; i++)
    {
        std::cin>>coin[i];
    }
    int res=change(coin,amt);
    std::cout<<res<<endl;
return 0;
}