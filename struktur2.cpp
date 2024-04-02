#include <iostream>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;
};
struct mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    string umur;
};

int main(){
    mahasiswa mhs;
    cout << "Nomor mahasiswa : ";
    cin >> mhs.nim;
    cout << "Nama mahasiswa : ";
    cin >> mhs.nama;

    cout << "Alamat mahasiswa : ";
    cout << "\t Nama Desa : ";
    cin >> mhs.alamat.desa;
    cout << "\t Nama Kota : ";
    cin >> mhs.alamat.kota;

    cout << "Umur mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout <<"\n Nim : "<<mhs.nim;
    cout <<"\n Nama : "<<mhs.nama;
    cout <<"\n Alamat : "<<mhs.alamat;
    cout <<"\n Umur : "<<mhs.umur;

}
