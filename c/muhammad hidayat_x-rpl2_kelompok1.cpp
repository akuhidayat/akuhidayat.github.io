#include <stdio.h>
//Kelompok 1 | X RPL 2
//Akmal - Aqilah - Ardian - Ajhi - Hidayat - Zahra

int main(){
	int saldo,bunga,administrasi,total;
	printf("Penghitung Saldo Bulanan Mu.\n\n");
	printf("Saldo Awal \t\t: ");
	scanf("%d",&saldo);
	printf("Bunga \t\t\t: ");
	scanf("%d",&bunga);
 printf("Biaya Administrasi \t: ");
	scanf("%d",&administrasi);
	total = saldo + bunga - administrasi;
	printf("Tabungan Mu \t\t: Rp. %d",total);
	return 0;
}