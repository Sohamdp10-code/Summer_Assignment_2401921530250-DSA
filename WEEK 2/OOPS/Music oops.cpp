#include<iostream>
using namespace std;


class Playable{
public:
    virtual void play() = 0;
};


class Veena : public Playable{
public:
    void play(){
        cout<<"Playing Veena"<<endl;
    }
};


class Saxophone : public Playable{
public:
    void play(){
        cout<<"Playing Saxophone"<<endl;
    }
};

int main(){

    Veena v;
    v.play();

  Saxophone s;
    s.play();

    
    Playable *p;

    p = &v;
    p->play();

    p = &s;
    p->play();

    return 0;
}
