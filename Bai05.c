#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float chieucao, bankinhday;
	printf("vui long nhap chieu cao\n");
	scanf("%f",&chieucao);
    printf("vui long nhap ban kinh day\n");
    scanf("%f",&bankinhday);
    printf("the tich cua hinh tru la %f",chieucao * 3.14 * bankinhday * bankinhday);
}
