#include<bits/stdc++.h>
using namespace std;

bool sol(int n, int i){
    if(n<=2) return n == 2;
    if(n%i == 0) return false;
    if(i >sqrt(n)) return true;
    return sol(n, i+1);
    
    
}

int main(){
    
    int n;
    cin>>n;
    int i = 2;
    if(sol(n,i)){
        cout<<"prime";
        
    }else{
        cout<<"not prime";
    }
    
    return 0;
}