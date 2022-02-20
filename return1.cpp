#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
    //data
    public:
        string nama;
        string IPK;
    /*constructor yg dieksekusi pertama kali..
    pakai nama fungsi = nama class (Mahasiswa)*/
    Mahasiswa(string inputNama, string inputIPK) {
        Mahasiswa::nama = inputNama;
        Mahasiswa::IPK = inputIPK;
    }
    //method = fungsi tanpa parameter dan dengan return
    //tipe fungsinya bukan void
    string getNama() {
        return "apaloh";
    }
    
};

int main () {
    Mahasiswa mahasiswa1 = Mahasiswa("Pablo", "5002");
    
    string dataNama = mahasiswa1.getNama();
    cout<<"dataNama adalah "<<mahasiswa1.getNama;
    return 0;
}