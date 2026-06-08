#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter a number" << "\n";
    cin >> n;
    int og=n;
    int rev=0;
    while(n>0){
        int digit = n%10;
        rev = rev*10 + digit;
        n = n/10;
    }
    if (rev == og){
        cout << "number is in palindrome";
    }
    else{
        cout<<"no palindrome";
    }
    return 0;
}