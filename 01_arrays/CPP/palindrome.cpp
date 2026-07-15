#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,1};
    int i =0;
    int j=size(arr)-1;
    bool pal = true;
    while (i < j){
        if(arr[i] != arr[j]){
            pal = false;
            break;
        }
        i++;
        j--;
    }
    if(pal){
        cout << "arr is palindrome" << "\n";
    }
    else{
        cout << "arr is not palindrome" << "\n";
    }
    return 0;
}