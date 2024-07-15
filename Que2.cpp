// Write a program to calculate the reverse of a given positive integer using recursion
#include<iostream>
using namespace std;
int reverseNum(int n, int rev){
    if(n==0) return rev;
    rev=(rev*10)+(n%10);
    reverseNum(n/10,rev);
}
int main(){
    int n,rev=0;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Reverse : "<<reverseNum(n,rev);
    return 0;
}