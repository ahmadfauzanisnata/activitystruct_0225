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
    mahasiswa mhs[3];
    for (int i=0;i<3;i++){
        cout << "Nomor mahasiswa : ";
        getline(cin,mhs.nim);
        cout << "Nama mahasiswa : ";
        getline(cin,mhs.nama) ;

        cout << "Alamat mahasiswa : "<<endl;
        cout << "\t Nama Desa : ";
        cin >> mhs.alamat.desa;
        cout << "\t Nama Kota : ";
        cin >> mhs.alamat.kota;
        cout << "Umur mahasiswa : ";
        cin >> mhs.umur;
    }
    cout << endl;
    cout <<"\n Nim : "<<mhs.nim;
    cout <<"\n Nama : "<<mhs.nama;
    cout <<"\n Alamat : ";
    cout << " \n \t Desa : "<< mhs.alamat.desa;
    cout << " \n \t Kota : "<< mhs.alamat.desa;
    cout <<"\n Umur : "<<mhs.umur;

}
