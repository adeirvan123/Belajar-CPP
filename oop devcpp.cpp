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
    Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIpk ){
        Mahasiswa::nama = inputNama;
        Mahasiswa::NIM = inputNIM;
        Mahasiswa::Jurusan = inputJurusan;
        Mahasiswa::IPK = inputIpk;

        cout<<Mahasiswa::nama<<endl;
        cout<<Mahasiswa::NIM<<endl;
        cout<<Mahasiswa::Jurusan<<endl;
        cout<<Mahasiswa::IPK<<endl;
    }
};

int main() {

    Mahasiswa mahasiswa1 = Mahasiswa("Ade","100","Teknik Menggambar",3.76);

    return 0;
}

