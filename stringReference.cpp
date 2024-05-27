#include<bits/stdc++.h>
using namespace std;
void print(string& s){
    //ekhane s hocce main function e declare kora string s er reference, tai print fun e string variable s re-assign korle main fun er string er value o change hoye zay. kintu param e zodi &/referenc/memory address sign use kora na hot tahole dui func e duita vinno/alada variable hoto. ekta arektar upor effect orto na.
    s="Gello";
}
int main(){
    string s="Hello";
    print(s);
    cout<<s;
    return 0;
}