#include<iostream>
using namespace std;
bool checkPrime(int x){
    if(x==0 || x==1 || x%2==0 || x%3==0 )
        return false;
    else if(x==2 || x==3 )
        return true;
    else{
        for(int i=5;i*i<x;i+=6){
            if(x%i==0 || x%(i+2)==0)
                return false;
        }
        return true;
    }
}
int findNextPrime(int x){
    for(int i=x+1;i<=2*x;i++){
        if(checkPrime(i))
            return i;
    }
}
int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;
    int nextPrime = findNextPrime(a);
    cout<<"The next prime number is:"<<nextPrime;
    return 0;
}