#include<bits/stdc++.h>
using namespace std;

int sol(int n){
    if(n==0){
        return 0;
    }
    int d = n%10;
    return d+sol(n/10);
}

int main(){
    
    int n;
    cin>>n;
    cout<<sol(n);
    
    return 0;
}