#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main() {
	int a, b, c;
	int result1, result2, result3, result4;
	scanf("%d %d %d", &a, &b, &c);
	result1 = (a == b);
	result2 = (b == c);
	result3 = (a != c);
	result4 = (b != c);
    printf("%d\n", result1);
    printf("%d\n", result2);
    printf("%d\n", result3);
    printf("%d", result4);
	return 0;
}

