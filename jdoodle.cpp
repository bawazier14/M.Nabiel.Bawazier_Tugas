#include <iostream>

using namespace std;
struct Clock {
  int hh;
  int mm;
  int ss;
};

void setJam(Clock jam, int HH, int MM, int SS){
    jam.hh = HH;
    jam.mm = MM;
    jam.ss = SS;
};

int getJam(int HH, int MM, int SS){
    
    cout << "Jam -> " << HH << ":" << MM << ":" << SS;
    
    return HH;
};
void isValid(int HH, int MM, int SS){
    if ( HH <= 23 && MM <= 59 && SS <= 59){
         if (0 <= HH && MM && SS) {
            getJam(HH,MM,SS);
        }
        else {cout << "Waktu Tidak Valid Ulangi";}
    }else{
        cout << "Waktu Tidak Valid Ulangi"; 
    }
};
int main() {
    Clock jam;
    int HH,MM,SS;
    cout << "Masukkan Jam   :";
    cin >> HH;
    cout << "Masukkan Menit :";
    cin >> MM;
    cout << "Masukkan Detik :";
    cin >> SS;
    setJam(jam, HH,MM,SS);
    isValid(HH, MM,SS);
    /*getJam(HH,MM,SS);*/
}