#include<bits/stdc++.h>
using namespace std;
//Iterator=pointer
int main(){
    string a;
    cin>>a;
    // string:: iterator it;
    // for(it=a.begin(); it<a.end(); it++){
    //     cout<<*it<<endl;
    // } 
    //a.begin() string er protom index element er memory address hold kore.
    //a.end() string er null er memory address hold kore.
    //a.end() string er shesh null value er memory address hold kore.
    //a.begin() and a.end() dutui memory index hold kore, tai egulu pointer. tai iterator diye string er element gulur memory address er upor diye loop kora hoy.
    for(auto it=a.begin(); it<a.end(); it++){
        cout<<*it<<endl;
    }
    return 0;
}