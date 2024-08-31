#include<bits/stdc++.h>
using namespace std;

void sol(string &n, int s, int e){
    if(s>=e){
        return;
    }
    swap(n[s],n[e]);
    sol(n,s+1,e-1);
}

int main(){
    
    string n = "happysingh";
    sol(n,0,n.length()-1);
    cout<<n;
    
    return 0;
}