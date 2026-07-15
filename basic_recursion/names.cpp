#include<bits/stdc++.h>
using namespace std;
void nameprint(int n){
    if(n==0){
        return;
    }
    cout << "Shilpa" <<"\n";
    nameprint(n-1);
}
int main(){
    int n =5;
    nameprint(n);
    return 0;
}