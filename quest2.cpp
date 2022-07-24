#include<iostream>
using namespace std;
int findHCF(int a,int b){
    int prod = a*b;
    int i;
    for(i = max(a,b);i<=prod;i++){
        if(i%a==0 && i%b==0){
            break;
        }
    }
    return prod/i;
}
int main(){
    int a,b;
    cout<<"Enter the two numbers:";
    cin>>a>>b;
    int LCM = findHCF(a,b);
    cout<<"The LCM of the two given numbers is:"<<LCM;
    return 0;
}