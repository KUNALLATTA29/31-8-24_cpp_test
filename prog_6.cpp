#include<bits/stdc++.h>
using namespace std;

void sol(int n1, int n2, int n){
    if(n==0){
        return;
    }
    cout<<n1<<" ";
    sol(n2, n1+n2, n-1);
    
    
}

int main(){
    
    int n;
    cin>>n;
    sol(0,1,n);
    
    return 0;
}