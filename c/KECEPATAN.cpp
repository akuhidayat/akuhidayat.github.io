#include <iostream> 
using namespace std;
//Muhammad Hidayat | X RPL 2

int main(){
 int kecepatan;
 cout << "[*] Selamat Datang Di YAT Tol [*]\n\n" << endl;

 cout << "Kecepatan : ";
 cin >> kecepatan;

 if (kecepatan >= 200){
   cout << "Kurangi Kecepatan Mu!" << endl;
 } else if (kecepatan < 200) {
   cout << "Naikan Kecepatan Mu!" << endl;
 } else {
   cout << "Hey, Ayo Jalan :)" << endl;
}

 return 0;
}
