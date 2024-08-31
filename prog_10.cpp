#include<bits/stdc++.h>
using namespace std;

int sol(int n){
    if(n==0)return 0;
    if(n<10) return 1;
    
    return 1+sol(n/10);
}

int main(){
    
    int n;
    cin>>n;
    cout<<sol(n);
    
    return 0;
}