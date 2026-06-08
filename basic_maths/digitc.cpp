#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter a number";
    cin >> n;
    int og=n;
    int count=0;
    while(n>0){
        int digit = n%10;
        n=n/10;
        count+=1;
    }
    cout << count <<"\n";
    int cnt = (int)(log10(og)+1);
    cout << cnt;
    return 0;
}