#include<bits/stdc++.h>
using namespace std;
void printReversSentence(stringstream& ss){
    //stringstream obosshoi &/reference/memory addres sohokare recieve korte hoy.
    //check ss variable e aro word ache kina. zodi thake tahole word ti word variable e store koro. zodi word na thake tahole if block e dukbe na, return hoye zabe.
    string word;
    if(ss>>word){
        printReversSentence(ss);
        cout<<word<<endl;
        // printReversSentence(ss); // one by one print
    }
}

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    printReversSentence(ss);
    // string word;
    // while(ss>>word){
    //     cout<<word<<endl;
    // }
    return 0;
}