#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
void reversearr(vector<int> arr){
    for(int i=arr.size()-1;i>=0;i--){
        cout << arr[i] << "\t";
    }
}
int main(){
    vector<int> arr;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int e;
        cin >> e;
        arr.push_back(e);
    }
    // for(int i=0;i<n;i++){
    //     cout << arr[i] << "\t";
    // }
    reversearr(arr);
    cout << "\n";
    reverse(arr.begin(),arr.end());
    for(int i:arr){
        cout << i << "\t";
    }
    return 0;
}