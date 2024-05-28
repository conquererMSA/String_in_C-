#include<bits/stdc++.h>
using namespace std;
class Person{
      public:
      string name;
      int age;
      Person(string name, int age){
        this->name=name;
        this->age=age;
      }
      int calAge(){
        return age;
      }
};
int main(){
    // make two dynamic object from Person class
    Person* msa=new Person("MSA", 25);
    Person* adeel=new Person("Adeel", 26);
    // ekhane mas and adeel hocce duiti dynamic object er reference. kintu object na. era shudhu heap memory te thaka duiti object er nj nij reference
    // copy two dynamic object one two another
    //msa=adeel //X ekhane adeel object er reference msa object er reference e copy kora hoyeche. zodi adeel delete kora hoy, tahole msa o null hoye zabe.
    // msa->name=adeel->name; //ekhane shudhu matro adeel object er name copy kore msa object er name e bosano hoyeche. ekhon adeel object delete kore dileo msa te copy howya name pawa zabe. ekhane shudhu adeel object er name msa object er name e copy hoyeche , sompurno object copy hoy ni. tai adeel object delete kore dileo msa theke copy howya name access kora zabe.
    // delete adeel;
    // cout<<msa->name;
    *msa=*adeel; // ekhane adeel object ti sompurno vabe copy kore msa object e rakha hoyeche. ekhon adeel object ti delete kore dileo msa theke er sob property access kora zabe.
    cout<<msa->name<<" "<<msa->age;
    return 0;
}