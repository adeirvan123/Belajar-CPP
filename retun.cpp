#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
    //data
    public:
        string nama;
        double IPK;
    /*constructor yg dieksekusi pertama kali..
    pakai nama fungsi = nama class (Mahasiswa)*/
    Mahasiswa(string inputNama, double inputIPK) {
        Mahasiswa::nama = inputNama;
        Mahasiswa::IPK = inputIPK;
    }

    //fungsi tanpa parameter tanpa return
    void tampilkanData(){
        cout<<"Nama saya "<<nama<<" dengan IPK yaitu ";
        cout<<IPK<<endl;
    }

    //fungsi dengan paramater tanpa retun
    void ubahNama(const char* namabaru){
        Mahasiswa::nama = namabaru;
    }
    
    //fungsi tanpa parameter dengan return
    string getNama() {
        return Mahasiswa::nama;
    }

    //fungsi dengan parameter dan dengan return
    double katrolIPK(const double tambahanNilai) {
        return Mahasiswa::IPK + tambahanNilai;
    }
};

int main () {
    Mahasiswa mahasiswa1 = Mahasiswa("Pablo",3.76);
    Mahasiswa mahasiswa2 = Mahasiswa("Andre",4.00);
    mahasiswa1.tampilkanData();
    mahasiswa2.tampilkanData();

    mahasiswa1.ubahNama("mario");
    mahasiswa1.tampilkanData();

    string dataNama = mahasiswa1.getNama();
    cout<<"dataNama adalah "<<dataNama<<endl;
    cout<<"nilai katrol Andre "<<mahasiswa2.katrolIPK(-2.00)<<endl;
    return 0;
}