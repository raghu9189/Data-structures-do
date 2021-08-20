#include<iostream>
using namespace std;
int findTrailing(int n){
    int ans=0;
    int p=5;
    while((n/p)>0){
        ans += n/p;
        p = p*5;
    }
    return ans;
}
int main(){
    int n = 5;
    cout<<findTrailing(n);
}
