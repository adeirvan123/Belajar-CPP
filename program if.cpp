#include <iostream>
#include <math.h>
using namespace std;

int main(){

    cout << "=== Program Pembayaran ===" << endl;
    unsigned int total_belanja;

    cout << "Masukan total belanja: ";
    cin >> total_belanja;


    if(total_belanja > 100000){
        cout << "Selamat! anda dapat hadiah" << endl;
    }

    cout << "Terimakasih sudah berbelanja di toko kami" << endl;

    
}
