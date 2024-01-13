#include <bits/stdc++.h>

using namespace std;

class breathing
{
public:
    void breath(){
        cout<<" can breadth";
    }
};

class walking{
    public:
    void walk(){
        cout<<", walk";
    }
};

class swimming
{
public:
    void swim(){
        cout<<", swim.\n";
    }
};

class human : public breathing, public walking, public swimming{
public:
    string name;
    human(string s){
        name= s;
    }
    void properties()
    {
        cout << name <<" " << "I " ;
    }
};


int main() {

    human h1("sana");
    h1.properties();
    h1.breath();
    // h1.properties();
    h1.walk();
    h1.swim();

    
    return 0;
}