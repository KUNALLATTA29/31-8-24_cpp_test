#include<bits/stdc++.h>
using namespace std;
//r means red color ball
//y means yellow color ball
//g means green color ball

void sol(vector<char> &arr){
    int cr=0,cy=0,cg=0;
    int n = arr.size();
    for(auto it:arr){
        if(it=='r'){
            cr++;
        }else if(it=='g'){
            cg++;
        }else{
            cy++;
        }
    }
    for(int i=0;i<cy;i++){
        arr[i]='y';
    }
    for(int i=cy;i<cy+cr;i++){
        arr[i]='r';
    }
    for(int i=cy+cr;i<n;i++){
        arr[i]='g';
    }
}

int main(){
    
    vector<char> arr = {'r','y','r','g','y','g'};
    sol(arr);
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}