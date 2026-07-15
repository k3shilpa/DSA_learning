#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    static int sum_of_n(int n){
        if(n<1){
            return 0;
        }
        return n + sum_of_n(n-1);
    }
    static int fact(int n){
        if(n<1){
            return 1;
        }
        return n*fact(n-1);
    }
};
int main(){
    Solution obj;
    cout << obj.sum_of_n(9) << "\n";
    cout << obj.fact(5);
    return 0;
}