#include <iostream>
using namespace std;
int main(){
   int nilai[5] = {2,4,8,16,32};
   cout << "Muhammad Hidayat | RPL 2" << endl << endl << endl;
   cout << "nilai[5] = {2, 4, 8, 16, 32}" << endl << endl;
   cout << "Nilai array nilai[5] : " << nilai[5] << endl;
   cout << "Isi Array : " << endl;
   for (int i=0;i<5;i++){
      cout << "nilai[" << i << "]= " << nilai[i] << endl;
   }
   
   cout << "\n\n-----[Array 2 Dimensi]-----" << endl;

   // Case Array 2 Dimention
   int hasil[2][4] = {{1,2,4,8},{3,6,12,24}};
   cout << "\n\n" << "nilai[2][4] = {{1, 2, 4, 8}, {3, 6, 12, 24}}\n" << endl;
   cout << "Nilai array nilai[2][4] : " << hasil[2][4] << endl;
   cout << "Isi Array : " << endl;
   for (int i=0;i<2;i++){
      for (int y=0;y<4;y++){
       cout << "nilai[" << i << "][" << y << "] = " << hasil[i][y] << endl;
     }
    }
return 0;
}