#include<bits/stdc++.h>
using namespace std;
int main(){
    string sen;
    getline(cin, sen);
    //getout word one by one by using stringstream
    string word;
    stringstream ss(sen);

    //approch 1
    // string reversWordSen;
    // while(ss>>word){
    //     //ekhon word ke kuno function ye diye reverse korte hobe.
    //     reverse(word.begin(), word.end());
    //     reversWordSen=reversWordSen+(" "+word);
    // }
    // cout<<reversWordSen.replace(0,1,"");

    //approach 2
    ss>>word;
    reverse(word.begin(), word.end());
    cout<<word;
    while(ss>>word){
        reverse(word.begin(),word.end());
        cout<<" "<<word;
        //evabe reverse korle proti word er pore space cole asche. ejonno sntence er prtom word manually stream theke ber kore nite hobe. erpor stream er 2nd word theke loop caliye reverse kore + reverse word er age space/" " add kore dilei problem solve hoye zabe

    }

    return 0;
}