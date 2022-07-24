#include<iostream>
#include<vector>
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
void findFirstNPrimes(int x){
    if(x==1){
        cout<<2;
        exit(0);
    }
    if(x==2){
        cout<<2<<" "<<3;
        exit(0);
    }
    int count = 1;
    int k=2;
    while(count<=x){
        if(checkPrime(k)){
            cout<<k<<" ";
            k++;
            count++;
        }
        else{
            k++;
            continue;
        }
    }
}
int main(){
    int N;
    cout<<"Enter the number uptil which you want all primes:";
    cin>>N;
    findFirstNPrimes(N);
    return 0;
}