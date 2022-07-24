#include<iostream>
#include<vector>
using namespace std;
void primeInRange(int x,int y){
    vector<bool> v1(y+1,true);
    vector<int> needed;
    for(int i=2;i<v1.size();i++){
        if(v1[i]){
            needed.push_back(i);
        }
        for(int j=2*i;j<v1.size();j+=i){
            v1[j] = false;
        }
    }
    for(auto i:needed){
        if(i>x && i<y){
            cout<<i<<" ";
        }
    }
}
int main(){
    int a,b;
    cout<<"Enter the two numbers:";
    cin>>a>>b;
    primeInRange(a,b);
    return 0;
}