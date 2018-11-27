#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int count_one_bits(unsigned int a){
	int  num = 0;
	while (a){
		if ((a & 1) == 1)
			num++;
			a >>= 1;
	}
	return num;
}
int main(){
	int i = 0;
	int num = 0;
	printf("请输入一个正数：");
	scanf("%d", &i);
	num = count_one_bits(i);
	printf("num=%d\n", num);
	system("pause");
	return 0;
}