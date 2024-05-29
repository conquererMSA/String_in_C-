#include<bits/stdc++.h>
using namespace std;
int main(){
    //AmirShaSalmanShaAtifShaKhanAmir
    //ai string theke shudhumatro "Sha" bad diye "Sha" er jaygay space/" " bosiye dite hobe.
    //output: Amir Salman Atif KhanAmir
    string s;
    cin>>s;
    string word="Sha";
    int len=word.length();
    //s er kun kun position e "Sha" ache tar index pete hobe. s.find("Sha") dile first index return korbe. s e "Sha" exist na korle -1 return korbe
    int index=s.find(word); //4
    // int index2=s.find("Tk");
    // cout<<index2;//-1
    while(s.find(word)!=-1){
        s.replace(s.find(word), len, " ");
    }
    cout<<s;
    return 0;
    }