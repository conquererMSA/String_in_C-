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
        //zotokkhon porzonto s e "Sha" er index pawya zacche totokkhon porzonto loop colte takbe.
        s.replace(s.find(word), len, " ");
        //ekhane s asbe and protm "Sha" er index giye "Sha" erase hoye " " bosbe. porer loop e s hobe = Amir SalmanShaAtifShaKhanAmir, same abar erokom hobe and input s er 2nd "Sha" erase hoye " " bosbe, input s er 2nd "Sha" holeo 2nd loop er 1st "Sha" erase hobe evabe loop colte takbe and s e exist kora sob "Sha" erase hoye space bosbe. 
    }
    cout<<s;
    return 0;
    }