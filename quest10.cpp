#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1 || n==0) return 1;
    else
        return (n*factorial(n-1))%1000000007;
}
double findSum(double n){
    if(n==1) return 1/factorial(1);
    else{
        return n/factorial(n) + findSum(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter the number of terms:";
    cin>>n;
    double answer = findSum(n); 
    cout<<answer; 
    return 0;
}