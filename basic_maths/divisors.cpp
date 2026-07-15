#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter a number";
    cin >> n;
    vector<int> arr;
    vector<int> arr2;
    for (int i=1;i<=n;i++){
        if(n%i==0){
            arr.push_back(i);
        }
    }
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            arr2.push_back(i);
        }
        if(i!=n/i){
            arr2.push_back(n/i);
        }
    }
    for(int x : arr){
        cout << x << "\t";
    }
    cout << "\n";
    for(int x : arr2){
        cout << x << "\t";
    }
    return 0;
}