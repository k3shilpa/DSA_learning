#include<bits/stdc++.h>
using namespace std;

class armstrongcheck{
    public:
    static bool is_armstrong(int n){
        int k = n;
        int len = to_string(k).length();
        int sum =0;
        while(n > 0){
            int digit = n% 10;
            sum+=pow(digit,len);
            n=n/10;
        }
        return sum == k;
    }


};
int main(){
    int n;
    cout << "enter the number";
    cin >> n;
    if(armstrongcheck::is_armstrong(n)){
        cout << "it is an armstrong number";
    }
    else{
        cout << "it is not an armstrong number";
    }
    return 0;
}