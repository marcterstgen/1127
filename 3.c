#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void print(int num){
	if (num < 0){
		num = -num;
	}
	if (num > 9){
		print(num / 10);
	}
	printf("%d ", num % 10);
}

int main(){
	int n = 0;
	printf("请输入一个整数：\n");
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}