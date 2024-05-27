#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    sort(s.begin(), s.end());
    //sort() function string er first element er pointer and null er pointer recieve kore. kuno string er first element er pointer hocce stringName.begin() and last element er pointer hocce stringName.end(). string er moddhye space takle se gulu sorted string er first e cole ase, space takle er pore ase. and letter gulu pore ase
    cout<<s;
    return 0;
}