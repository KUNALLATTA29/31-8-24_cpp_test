#include<bits/stdc++.h>
using namespace std;

void sol(int n){
    if(n<1){
        return;
    }
    cout<<n<<" ";
    sol(n-1);
    
    
}

int main(){
    
    int n;
    cin>>n;
    sol(n);
    
    return 0;
}