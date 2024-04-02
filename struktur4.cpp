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
        cout << "Data ke-"<< (i+1)<<":"<<endl;
        cout << "Nomor mahasiswa : ";
        getline(cin, mhs[i].nim);
        cout << "Nama mahasiswa : ";
        getline(cin,mhs[i].nama) ;

        cout << "Alamat mahasiswa : "<<endl;
        cout << "\t Nama Desa : ";
        cin >> mhs[i].alamat.desa;
        cout << "\t Nama Kota : ";
        cin >> mhs[i].alamat.kota;
        cout << "umur Mahasiswa : ";
        cin >> mhs[i].umur;
        cin.ignore(1,'\n');


        cout << "Umur mahasiswa : ";
        cin >> mhs[i].umur;
    }
    for (int i=0;i<3;i++){
        cout << endl;
        cout <<"\n Nim : "<<mhs[i].nim;
        cout <<"\n Nama : "<<mhs[i].nama;
        cout <<"\n Alamat : ";
        cout << " \n \t Desa : "<< mhs[i].alamat.desa;
        cout << " \n \t Kota : "<< mhs[i].alamat.desa;
        cout <<"\n Umur : "<<mhs[i].umur;
    }
}
