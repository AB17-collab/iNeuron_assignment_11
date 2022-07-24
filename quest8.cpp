#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1 || n==0) return 1;
    else
        return (n*factorial(n-1))%1000000007;
}
void pascalTriangle(int x){
    for(int i=0;i<x;i++){
        for(int j=0;j<x-(i+1);j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<factorial(i)/(factorial(k)*factorial(i-k))<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    pascalTriangle(n);
    return 0;
}