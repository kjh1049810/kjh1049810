#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main() {
	int a, b, c;
	int sum, avg;
	printf("세 수를 입력하세요");
	scanf("%d %d %d", &a, &b, &c);
	sum = a + b + c;
	avg = (sum);
	printf("sum : %d\n", sum = a + b + c);
	printf("avg : %d", avg/3); 
	return 0;
}
