#include<bits/stdc++.h>
using namespace std;

int sol(int m, int n){
    if(n==0){
        return 1;
    }else{
        return m * sol(m, n-1);
    }
    
}

int main(){
    
    int m = 2;
    int n = 8;
    cout<<sol(m,n);
    
    return 0;
}