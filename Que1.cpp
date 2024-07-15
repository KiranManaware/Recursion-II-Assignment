// Write a program to calculate the sum of the digits of a given positive integer using recursion
#include<iostream>
using namespace std;
int digitSum(int n, int sum){
    if(n==0) return sum;
    sum+=(n%10);
    digitSum(n/10,sum);
}
int main(){
    int n,sum=0;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Sum : "<<digitSum(n,sum);
    return 0;
}