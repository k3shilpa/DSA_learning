#include<bits/stdc++.h>
using namespace std;
int gcd(int n1,int n2);
int gcd2(int n1,int n2);
int gcd3(int n1,int n2);
int main(){
    int n1,n2;
    cout << "enter two numbers" << "\n";
    cin >> n1 >> n2;
    int great = gcd(n1,n2);
    int great2 = gcd2(n1,n2);
    int great3 = gcd3(n1,n2);
    cout << great <<"\n";
    cout << great2 <<"\n";
    cout << great3 <<"\n";
    return 0;
}
// bruteforce
int gcd(int n1,int n2){
    int gc=1;
    for(int i=1;i<min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gc=i;
        }
    }
    return gc;
}
//optimal
int gcd2(int n1,int n2){
    int gc = 1;
    for(int i=min(n1,n2);i>0;i--){
        if(n1%i==0 && n2%i==0){
            return i;
        }
    }
    return 1;
}
//best
int gcd3(int n1,int n2){
    while(n1>0 && n2>0){
        if(n1 > n2){
            n1=n1%n2;
        }
        else{
            n2=n2%n1;
        }
    }
    if(n1==0){
        return n2;
    }
    return n1;
}
