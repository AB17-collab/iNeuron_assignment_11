#include<iostream>
using namespace std;
int findLCM(int a,int b){
    int prod = a*b;
    int toBeSent = prod;
    for(int i = max(a,b);i<=prod;i++){
        if(i%a==0 && i%b==0){
            prod = i;
            return prod;
        }
    }
    return toBeSent;
}
int main(){
    int a,b;
    cout<<"Enter the two numbers:";
    cin>>a>>b;
    int LCM = findLCM(a,b);
    cout<<"The LCM of the two given numbers is:"<<LCM;
    return 0;
}