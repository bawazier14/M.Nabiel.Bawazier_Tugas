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

/*fungsi dibawah adalah untuk menggunakan
semua yang ada dalam namespace std (standard)*/
using namespace std;

// menggunakan selector function
int getJam(int input1){
  if ( input1 <= 23){
    if (0 <= input1) {
      cout << input1 << ":";  
    } else {cout << "Waktu Tidak Valid";}
  }else{
    cout << "Waktu Tidak Valid"; 
  }
  
  return input1;
};
//menggunakan selector function
int getMenitDetik(int input1){
  if ( input1 <= 59){
    if (0 <= input1) {
      cout << input1 << ":";  
    } else {cout << "Waktu Tidak Valid";}
  }else{
    cout << "Waktu Tidak Valid"; 
  }
  
  return input1;
};

/*dibawah adalah fungsi utama 
untuk mendeklarasikan program ke console */
int main() {
  int input1,input2,input3;
  cin >> input1;
  cin >> input2;
  cin >> input3;
  getJam(input1);
  getMenitDetik(input2);
  getMenitDetik(input3);
  
  return 0;
}
