#include <iostream>
using namespace std;


class LibraryUser {
public:
    virtual void registerAccount() = 0;
    virtual void requestBook() = 0;
};


class KidUser : public LibraryUser {
public:
    int age;
    string bookType;

    void registerAccount() {
        if (age < 12)
            cout << "Kids Account Registered\n";
        else
            cout << "Age must be less than 12\n";
    }

    void requestBook() {
        if (bookType == "Kids")
            cout << "Book Issued for 10 days\n";
        else
            cout << "Only Kids books allowed\n";
    }
};


class AdultUser : public LibraryUser {
public:
    int age;
    string bookType;

    void registerAccount() {
        if (age > 12)
            cout << "Adult Account Registered\n";
        else
            cout << "Age must be greater than 12\n";
    }

    void requestBook() {
        if (bookType == "Fiction")
            cout << "Book Issued for 7 days\n";
        else
            cout << "Only Fiction books allowed\n";
    }
};

int main() {

    KidUser k;
    k.age = 10;
    k.registerAccount();

    k.bookType = "Kids";
    k.requestBook();

    cout << endl;

    AdultUser a;
    a.age = 23;
    a.registerAccount();

    a.bookType = "Fiction";
    a.requestBook();

    return 0;
}