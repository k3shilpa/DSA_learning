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
    int y=1;
    for(int i=1;i<=n;i++){
        if (i%2==0){
                y=0;
            }
            else{
                y=1;
            }
        for(int j=1;j<=i;j++){
            cout << y;
            y = 1-y;
        }
        cout << "\n";
    }
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        for(int k =0;k<2*n-2*i;k++){
            cout << " ";
        }
        for(int z=i;z>0;z--){
            cout << z;
        }
        cout << "\n";
    }
    int start=1;
    for (int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout << start;
            start++;
        }
        cout <<"\n";
    }
    for(int i=65;i<=n+65;i++){
        for(int j=65;j<=i;j++){
            cout << (char)j;
        }
        cout << "\n";
    }
    // for (int c = 65; c <= 90; ++c)
    //     cout << (char)c << " ";
  
    // cout << endl;
    // for(int i=65;i<=65+n;i++){
    //     for(int j=i;j>=65;j--){
    //         cout << (char)j;
    //     }
    //     cout << "\n";
    // }
    cout << "\n";
    for(int i=65;i<=65+n;i++){
        for(int j=65;j<=65+(n+65-i);j++){
            cout << (char)j;
        }
        cout << "\n";
    }
    cout << "\n";
    // int z=65;
    // for(int i=1;i<=n;i++){
    //     for(int j=i;j<=n;j++){
    //         cout<<(char)z;
            
    //     }
    //     z++;
    //     cout <<"\n";
    // }
    int z=65;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<(char)z;
            
        }
        z++;
        cout <<"\n";
    }
    for(int i=0;i<=n;i++){
        for(int k=0;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=65;j<65+i;j++){
            cout<<(char)j;
        }
        for(int y=65;y<65+i;y++){
            cout <<(char)y;
        }
        cout<<"\n";
    }
    return 0;
}