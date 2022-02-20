#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
    //data
    public:
        string Nama;
        double IPK;
    /*constructor yg dieksekusi pertama kali..
    pakai nama fungsi = nama class (Mahasiswa)*/
    Mahasiswa(string inputNama, double inputIPK) {
        Mahasiswa::Nama = inputNama;
        Mahasiswa::IPK = inputIPK;
    }
    //method (fungsi selain constructor). contoh fungsi tanpa parameter dan return
    void tampilkanData () {
        cout<<"Nama saya adalah "<<Nama<<" dengan IPK ";
        cout<<IPK<<endl;
    }
    //method dengan parameter tanpa return
    void gantiNama (const char* namaBaru) {
        Mahasiswa::Nama = namaBaru;
    }
};

int main () {

    Mahasiswa mahasiswa1 = Mahasiswa("Ade",3.76);
    Mahasiswa mahasiswa2 = Mahasiswa("Bima",2.55);
    mahasiswa1.tampilkanData();
    mahasiswa2.tampilkanData();

    mahasiswa1.gantiNama("Agnes");
    mahasiswa1.tampilkanData();
    return 0;
}