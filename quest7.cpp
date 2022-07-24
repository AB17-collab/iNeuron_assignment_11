#include<iostream>
using namespace std;
void fibonacci(int k){
    int a = -1,b=1;
    int count = 0;
    while(count<k){
        int c = a+b;
        a = b;
        b = c;
        cout<<c<<" ";
        count++;
    }
}
int main(){
    int n;
    cout<<"Enter how many fibonacci terms do you want:";
    cin>>n;
    fibonacci(n);
    return 0;
}