#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
    public://bisa diakses diluar class ini
        string nama;
        string NIM;
        string Jurusan;
        double IPK;
    //constructor (fungsi yg dipanggil pertama kali pada class with paramater)
    Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK ) {
        Mahasiswa::nama = inputNama;
        Mahasiswa::NIM = inputNIM;
        Mahasiswa::Jurusan = inputJurusan;
        Mahasiswa::IPK = inputIPK;

        cout<<Mahasiswa::nama  <<endl;
        cout<<Mahasiswa::NIM <<endl;
        cout<<Mahasiswa::Jurusan <<endl;
        cout<<Mahasiswa::IPK <<endl<<endl;
    }
};

int main() {
    Mahasiswa mahasiswa1 = Mahasiswa("Ade","100","Teknik Menggambar",3.76);
    Mahasiswa mahasiswa2 = Mahasiswa("Otong","101","Sastra Mesin",10.20);
    return 0;
}