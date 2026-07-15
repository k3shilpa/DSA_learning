#include<bits/stdc++.h>
using namespace std;
class isprimenum{
    public:
    static bool is_prime(int n){
        int cnt=0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                cnt++;
                if(n/i!=i){
                    cnt++;
                }
            }
        }
        if(cnt==2){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    int n;
    cout<< "enter a num";
    cin >> n;
    if(isprimenum::is_prime(n)){
        cout << "its a prime";
    }
    else{
        cout << "its not a prime";
    }
    return 0;
}