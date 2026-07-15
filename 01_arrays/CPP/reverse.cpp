#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int i=0;
    int j=size(arr)-1;
    while (i < j){
        // int k = arr[i];
        // arr[i]=arr[j];
        // arr[j]=k;
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int a=0;a<size(arr);a++){
        cout << arr[a] << "\t";
    }
    cout << "hello";

    return 0;
}