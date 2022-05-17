#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main() {
	int a = 10, b = 10;
	printf("%d %d\n", a, b);
	printf("%d %d\n", a++, ++b); //후치증가, 전치증가 
	printf("%d %d", a, b);
	//공통점은 1을 증가 
	return 0;
}

