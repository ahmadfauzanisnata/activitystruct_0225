#include <iostream>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    string umur;
};

int main(){
    mahasiswa mhs;
    cout << "Nomor mahasiswa : ";
    cin >> mhs.nim;
    cout << "Nama mahasiswa : ";
    cin >> mhs.nama;
    cout << "Alamat mahasiswa : ";
    cin >> mhs.alamat;
    cout << "Umur mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout <<"\n Nim : "<<mhs.nim;
    cout <<"\n Nama : "<<mhs.nama;
    cout <<"\n Alamat : "<<mhs.alamat;
    cout <<"\n Umur : "<<mhs.umur;

}

