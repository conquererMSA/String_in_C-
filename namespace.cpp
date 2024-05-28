#include<bits/stdc++.h>
using namespace std;
//namespace e class, func, object etc rakha ba store kora zay.
//namespace sob somoy public hoy. 
//namespace namespaceName::propertyName diye access korte hoy.
namespace MSA {
    // access by "MSA::age ba MSA::hello()", karon duita namespace er property gulu vinno
    // int age=26;
    // void hello(){
    //     cout<<"MSA name-space";
    // }

    // access by "using namespace Adeel", karon duita namespace er property gulu vinno
    int age1=26;
    void hello1(){
        cout<<"MSA name-space";
    }
}
namespace Adeel {
    // access by "Adeel::age ba Adeel::hello()", karon duita namespace er property gulu vinno
    // int age=26;
    // void hello(){
    //     cout<<"Adeel name-space";
    // }

    // access by "using namespace Adeel", karon duita namespace er property gulu vinno
    int age2=26;
    void hello2(){
        cout<<"Adeel name-space";
    }
}
using namespace MSA;
using namespace Adeel;
//zodi duita namespace eksathe include kora hoy, and tader moddhokar kuno variable, function ba class same namer hoy tahole evabe namespace include kore access kora zabe na. tobe property, variable, function, and class name same na hoy tahole access kora zabe.
//
int main(){
    //  MSA::hello();// zodi vinno duita namespace er func, variable same hoy.
    // cout<<MSA::age;
    //accessing by include namespace
    // cout<<age; //evabe access kora zabe na, karon MSA and Adeel namespace duita te age namok property ache. compiler janena MSA naki Adeel namespace theke age property access korte hobe. kintu MSA::age diye access korle pawya zabe.
    Adeel::hello();
    return 0;
}