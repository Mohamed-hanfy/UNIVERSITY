/*
Given two numbers N and M. Print the summation of their last digits.
input 12 13
last digit sum =2 +3=5
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
long long N ,M; 
cin >> N >> M; 
cout<< (N % 10) + (M % 10);
return 0;
}