#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


class Compartment{
public:
    virtual void notice() = 0;
};

class FirstClass : public Compartment{
public:
    void notice(){
        cout<<"First Class Compartment"<<endl;
    }
};

class Ladies : public Compartment{
public:
    void notice(){
        cout<<"Ladies Compartment"<<endl;
    }
};

class General : public Compartment{
public:
    void notice(){
        cout<<"General Compartment"<<endl;
    }
};

class Luggage : public Compartment{
public:
    void notice(){
        cout<<"Luggage Compartment"<<endl;
    }
};

int main(){

    srand(time(0));

    Compartment *c[10];

    for(int i=0;i<10;i++){

        int r = rand()%4 + 1;

        if(r==1)
            c[i]=new FirstClass();

        else if(r==2)
            c[i]=new Ladies();

        else if(r==3)
            c[i]=new General();

        else
            c[i]=new Luggage();

        c[i]->notice();
    }

    return 0;
}
