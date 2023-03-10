#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z,min;
    cout <<"Entre three numbers,pls"<<"\n";
    cin >>x>>y>>z;
    min=x;
    if(min>y){
        min=y;
    }
     if(min>z){
        min =z;
    }
    cout <<min<<"\n";
}