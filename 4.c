#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(){
	int m = 0;
	int n = 0;
	int q = 0;
	int i = 0;
	int count = 0;
	printf("�������������֣�");
	scanf("%d %d", &m, &n);
	q = m^n;  // ��������λ��򣬶�Ӧ��ͬ��λ������1
	for (i = 0; i<32; i++){
		if (((q >> i) & 1) == 1){
			count++;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}