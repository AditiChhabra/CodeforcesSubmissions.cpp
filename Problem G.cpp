// problem G from codeforces 
// sum from 1 to N

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long sum;
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        sum= n*1ll*(n+1)/2;
    }
    cout<<sum<<endl;
    return 0;
}