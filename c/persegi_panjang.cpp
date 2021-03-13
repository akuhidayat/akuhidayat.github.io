#include <stdio.h>

int main(){
	int a,b,luas,keliling;
	printf("Keliling & Luas Persegi Panjang.\n\n");
	printf("Panjang \t: ");
	scanf("%d",&a);
	printf("Lebar \t\t: ");
	scanf("%d",&b);
	luas = a * b;
 keliling = 2*(a+b);
	printf("Luas \t\t: %d",luas);
 printf("\nKeliling \t: %d",keliling);
	return 0;
}