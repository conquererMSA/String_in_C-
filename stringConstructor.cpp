#include<bits/stdc++.h>
using namespace std;
int main(){
    // 1
    string a="Adeel Fatih";
    string b("Adeel Fatih");
    //ekahne string constructor use kore b variable create kora hoyeche.
    if(a==b){
        cout<<"same"<<endl;
    }else{
        cout<<"Not same"<<endl;
    }
   // 2
   string c("Adeel Fatih",4);
   // ekhane string constructor duita argument recieve koreche. ai string constructor string theke first 4 charecter return korbe
    cout<<c<<endl; //output: Adee

    // 3
    string d="Muhammad SA";
    string e(d,2);
    //ekahne d er value e te copy kore assign kora hocce. ai string constructor d variable er first 2 charecter erase kore baki charecter gulu e variable e assign kore dibe
    cout<<e<<endl; //output: hammad SA

    // 4
    // string f(5,"CPU"); //error dibe, ai string char only ekta char recieve kore.
    string f(5,"C");
    //ai string constructor first arument time charecter niye and string create kore sei string return kore.

    cout<<f<<endl; //output: CCCCC
    return 0;
}