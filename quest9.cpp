#include<iostream>
using namespace std;
int squareOfTheNumber(int x){
    return x*x;
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int answer = squareOfTheNumber(n);
    cout<<answer;
    return 0;
}