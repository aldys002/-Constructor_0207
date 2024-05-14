#include <iostream>
using namespace std;

class mahasiswa 
{
public :
    static int nim;
     int id;
    string nama;

    void setID();

    void printAll();

    mahasiswa(string pnama)
    {
        nama = pnama;
        setID();
    }
};

int mahasiswa::nim = 207;

void mahasiswa::setID()
{
    id = ++nim;
}

void mahasiswa::printAll()
{
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main()
{
    mahasiswa mhs1("Nurhama Mariadi");
    mahasiswa mhs2("Aste Tami");
    mahasiswa mhs3("Haechan");
    mahasiswa mhs4("Ning Ning");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();
    return 0;
}