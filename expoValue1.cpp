#include<iostream>
using namespace std;

int recur(int n,int m){
    if(m==0)return 1;
    
    return n*recur(n,m-1);
}
int main(){
    int result=recur(10,3);
    cout<<result;
}
