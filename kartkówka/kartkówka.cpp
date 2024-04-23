#include <iostream>
using namespace std;

class Pojazdy
{
public:
    virtual void przedstaw() = 0;

};

class Samochod: public Pojazdy
{
public:
    virtual void przedstaw() {
        cout << "Przedstawienie samochodu" << endl;
    }

};

class Motocykl: public Pojazdy
{
public:
    virtual void przedstaw() {
        cout << "Przedstawienie samochodu" << endl;
    }

};

class Rower: public Pojazdy
{
public:
    virtual void przedstaw() {
        cout << "Przedstawienie samochodu" << endl;
    }

};

void przeloczPojazd(Pojazdy& ob) {
    ob.przedstaw();
}

int main()
{
    Samochod sam;
    Motocykl mot;
    Rower row;

    cout << "Samochod: " << endl;
    przeloczPojazd(sam);
    cout << "Motocykl: " << endl;
    przeloczPojazd(mot);
    cout << "Rower: " << endl;
    przeloczPojazd(row);

    return EXIT_SUCCESS;
}