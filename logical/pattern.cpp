#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter a number : "<<"\n";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* "<<"\t";
        }
        cout<<"\n";
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        cout << "\n";
    }
    for (int i =1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout << i;
        }
        cout << "\n";
    }
    for (int i=5;i>0;i--){
        for (int j = i;j>0;j--){
            cout<<"* ";        
        }
        cout << "\n";
    }
    for (int i=5;i>0;i--){
        for (int j = 1;j<=i;j++){
            cout<<j;        
        }
        cout << "\n";
    }
    for(int i=1;i<=n;i++){
        for(int k =1;k<=n-i;k++){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        for(int j=2;j<=i;j++){
            cout << "*";
        }
        cout << "\n";
    }
    for(int i=n;i>0;i--){
        for(int k =1;k<=n-i;k++){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        for(int j=2;j<=i;j++){
            cout << "*";
        }
        cout << "\n";
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout << "*";
        }
        cout << "\n";
    }
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}