#include<bits/stdc++.h>
using namespace std;
int main(){
 int x,y;
 cout <<"Entre two numbers "<<"\n";
 cin >>x>>y;
 if(x<0){
    cout <<x <<" is negative"<<"\n";
 }
 else if(y<0){
    cout <<y<<" is nagative"<<"\n";
 }
 if(x==y){
    cout <<x <<" is equal to "<<y<<"\n";
 }
 else if(x>y){
     cout <<x <<" is lager than "<<y<<"\n";
 }
 else
 cout <<y<<" is larger than "<<x<<"\n";
 
}