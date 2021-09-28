#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1(int argc, char *argv[]) {
	unsigned long dollar;
	printf("Vui long nhap so tien can doi \n");
	scanf("%d", &dollar);
	printf("%d vnd bang %d usd", dollar * 16689, dollar);
	return 0;
}
