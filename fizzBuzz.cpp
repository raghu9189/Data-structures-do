#include<iostream>
using namespace std;
/*int main(){
    int c3=0;
    int c5=0;
for(int i=1;i<=100;i++){
        c3++;
        c5++;
        string d="";
        if(c3==3){
            d += "fizz";
            c3 = 0;
        }
        if(c5==5){
            d += "buzz";
            c5 = 0;
        }
        if(d == ""){
            cout<<i<<endl;
        }else{
            cout<<d<<endl;
        }
}
}*/
int main(){
    for(int i=1;i<=100;i++){
            string d = "";
        if(i%3 == 0){
            d += "fizz";
        }
        if(i%5 == 0){
            d += "buzz";
        }
        if(d == ""){
            cout<<i<<endl;
        }else{
            cout<<d<<endl;
        }
    }
}
