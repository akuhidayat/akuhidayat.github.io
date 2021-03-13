#include <iostream>
using namespace std;
//Hidayat X RPL 2

int main(){
    cout << "[#] Ini Break Di Loop Ke-3\n";
    for(int i = 0; i < 10; i++){
        if (i == 3)
          break;
        printf("[+] Perulangan Ke %i\n", i);
    }
    
    cout << "\n\n[#] Ini Continue (Skip) Ke-3\n";
    for(int i = 0; i < 10; i++){
        if (i == 3)
          continue;
        printf("[+] Perulangan Ke %i\n", i);
    }

    return 0;
}