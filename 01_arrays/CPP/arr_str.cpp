#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int findlength(string s){
        return s.length();
    }
    public:
    void accesschar(string s){
        for(int i=0;i<s.length();i++){
            cout<<s[i]<<"\n";
        }
    }
};
int main(){
    string s;
    cout<<"enter a string ";
    cin>>s;
    Solution obj;
    cout<<obj.findlength(s)<<"\n";
    obj.accesschar(s);
    return 0;
}