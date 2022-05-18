#include <iostream>

using namespace std;

struct Pegawai {
   char nip[10], golongan[2];
   string nama, status;
   int gaji;
} Pgw1;
void getData(){
  cout << "inputkan NIP :" << endl;
  cin >> Pgw1.nip;
  cout << "inputkan Nama :" << endl;
  cin >> Pgw1.nama;
  cout << "inputkan golongan :" << endl;
  cin >> Pgw1.golongan;
  cout << "inputkan status :" << endl;
  cin >> Pgw1.status;
  cout << "inputkan gaji :" << endl;
  cin >> Pgw1.gaji;
}
void putData(){

  cout << endl << "NIP :" << Pgw1.nip;
  cout << "\nNama :" << Pgw1.nama;
  cout << "\nGolongan :" << Pgw1.golongan;
  cout << "\nStatus :" << Pgw1.status;
  cout << "\nGaji :" << Pgw1.gaji;

}
int main() {
  getData();
  putData();

}
