#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> arr;
    for(int i=0;i<10;i++){
        arr.insert(i);
    }
    for (auto it=arr.begin();it != arr.end();it++){
        cout << *it << "\t";
    }
    if(arr.find(2)!=arr.end()){
        cout << "elemet present "<<"\n";
    }
    else{
        cout << "element not present"<<"\n";
    }
    if(arr.find(12)!=arr.end()){
        cout << "elemet present "<<"\n";
    }
    else{
        cout << "element not present"<<"\n";
    }
    arr.erase(arr.begin());
    for (auto it=arr.begin();it != arr.end();it++){
        cout << *it << "\t";
    }
    cout << endl;
    cout << arr.size()<<"\n";
    if (arr.empty() == false) // empty() returns true if set has no elements
        cout << "The unordered set is not empty " << endl;
    else
        cout << "The unordered set is empty" << endl;
    
    arr.clear();
    if (arr.empty() == false) // empty() returns true if set has no elements
        cout << "The unordered set is not empty " << endl;
    else
        cout << "The unordered set is empty" << endl;
    return 0;
}