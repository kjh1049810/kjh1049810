#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main() {
	int a, b;
	int result1, result2;
	scanf("%d %d", &a, &b);
	result1 = (a == b);
	result2 = (a != b);
    printf("%d\n", result1);
    printf("%d", result2);
	return 0;
}

