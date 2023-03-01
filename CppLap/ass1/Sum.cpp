/*
Given a number N
. Print the summation of the numbers that is between 1 and N
*/
#include<iostream>
using namespace std;
int main(){
long long N , sum; 
cin >>N;
 sum = N*(N+1)/2; 
 cout<< sum;
}