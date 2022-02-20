#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Mahasiswa {
    public:
        string nama;
        string NIM;
        string jurusan;
        //constructor
        Mahasiswa(string inputNama, string inputNIM, string inputJurusan) {
            Mahasiswa::nama = inputNama;
            Mahasiswa::NIM = inputNIM;
            Mahasiswa::jurusan = inputJurusan;
        }

        string stringify(){
            retrun "\n" + nama + " " + NIM + " " + jurusan;
        }
};

class Database {
    public:
        ifstream in;//buat membaca
        ofstream out;//buat menulis
        string fileName;
        //cosntructor
        Database(const char* filename)//pengganti string dan lebih hemat memori 
        {
            Database::fileName = filename;
        }

        void save(Mahasiswa data) {
            cout<<data.nama<<endl;
            cout<<data.NIM<<endl;
            cout<<data.jurusan<<endl;

            Database::out.open(Database::fileName,ios::app);
            
            Database::out<<data.stringify();
        }
};


int main()
{
    Mahasiswa mahasiswa1 = Mahasiswa("Ucup","123","Teknik Pertemanan");
    Database database = Database("data.txt");//parameternya bikin file notepad
    
    //save data ke database
    database.save(mahasiswa1);
    return 0;
}

