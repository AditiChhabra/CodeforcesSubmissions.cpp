#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,x;
   cin>>n;
   
   for(x=1;x<=10000;x++){
   if(n%x==0){
       cout<<x<<'\n';
   }
   }
   
    return 0;
}