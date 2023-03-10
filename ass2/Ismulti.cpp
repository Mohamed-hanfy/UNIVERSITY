#include<bits/stdc++.h>
using namespace std;
int main(){
 int x,y;
 cout <<"Entre two numbers "<<"\n";
 cin >>x>>y;
 if(x%y==0){
    cout <<x <<" is muliple of "<<y<<"\n";
 }
 else {
    cout <<x <<" is not muliple of "<<y<<"\n";
 }
 if(y%x==0){
    cout<<y<<" is multipule of "<<x<<"\n";
 }
 else 
 {
  cout<<y<<" is not multipule of "<<x<<"\n";
 }
 
}