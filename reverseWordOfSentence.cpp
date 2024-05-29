#include<bits/stdc++.h>
using namespace std;
int main(){
    string sen;
    getline(cin, sen);
    //getout word one by one by using stringstream
    string word;
    stringstream ss(sen);
    string reversWordSen;
    while(ss>>word){
        //ekhon word ke kuno function ye diye reverse korte hobe.
        
        reverse(word.begin(), word.end());
        reversWordSen=reversWordSen+(" "+word);
    }
    cout<<reversWordSen.replace(0,1,"");
    return 0;
}