/* 1121031059
   Muhammad Nabiel Bawazier
   Informatika B */

// T1_StrukturData

/*  Program tugas untuk Matakuliah Struktur Data
    Membuat Sebuah Fungsi Tambahan Pada File Jam
    Menggunakan Value changer produce / Selector Function dan Validator*/

#include <iostream>
/*"include" adalah sebuah perintah untuk mengambil file dari tempat lain
   <iostream> sebuah file yang berfungsi untuk menginput dan mengeluarkan data
*/

using namespace std;
/*fungsi diatas adalah untuk menggunakan
semua yang ada dalam namespace std (standard)*/

// menggunakan Value changer procedure
void setJam(int input1,int input2, int input3,bool a){
    if ( input1 <= 23 && input2 <= 59 && input3 <= 59){
      if (0 <= input1 && input2 && input3) {
        cout << input1 << ":" << input2 << ":" <<input3; 
      }
      else {cout << "Waktu Tidak Valid Ulangi";}
    }else{
    cout << "Waktu Tidak Valid Ulangi"; 
    }
};

// int getJam(int input1){
//   setJam;
//   return input1;
// };
// int getMenit(int input1){
  
//   return input1;
// };
// int getDetik(int input1){
  
//   return input1;
// };

/*dibawah adalah fungsi utama 
untuk mendeklarasikan program ke console */
int main() {
  int input1,input2,input3;
  bool a = true;
      cout << "masukkan Jam   :";
      cin >> input1;
      cout << "masukkan Menit :";
      cin >> input2;
      cout << "masukkan Detik :";
      cin >> input3;
      // getJam(input1);
      // getMenit(input2);
      // getDetik(input3);
  setJam(input1,input2,input3,a);
  return 0;
}