#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    static void printn(int n){
        if(n==0){
            return;
        }
        printn(n-1);
        cout << n << "\t";

    }
    static void printnn(int n){
        if(n==0){
            return;
        }
        cout << n << "\t";
        printnn(n-1);
        
    }

};
int main(){
    int n;
    Solution obj;
    cout << "enter n";
    cin >> n;
    obj.printn(n);
    cout << "\n";
    obj.printnn(n);
    return 0;
}