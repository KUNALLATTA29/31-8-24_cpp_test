#include<bits/stdc++.h>
using namespace std;

void sol(int n){
    if(n<1){
        return;
    }
    
    sol(n-1);
    cout<<n<<" ";
    
}

int main(){
    
    int n;
    cin>>n;
    sol(n);
    
    return 0;
}