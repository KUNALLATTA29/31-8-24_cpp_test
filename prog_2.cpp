#include<bits/stdc++.h>
using namespace std;

int sol(int n){
    if(n==0){
        return 0;
    }else{
        return n + sol(n-1);
    }
    
}

int main(){
    
    int n;
    cin>>n;
    cout<<sol(n);
    
    return 0;
}