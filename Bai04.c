#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main3(int argc, char *argv[]) {
	float chieucao, canhday;
	printf("vui long nhap chieu cao\n");
	scanf("%f",&chieucao);
    printf("vui long nhap canh day\n");
    scanf("%f",&canhday);
    printf("dien tich tam giac la %f",chieucao * canhday / 2);
}
