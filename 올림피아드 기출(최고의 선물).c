#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int num[1001];
int main() {
	int a, b, c = 0;
	int sum = 0;
	scanf("%d%d", &a, &b);
	for (int i = 0; i < a; i++) {
		scanf("%d", &c);
		num[c]++;
	}
	for (int i = 1; i <= b; i++) {
		for (int j = i+1; j <= b; j++) {
			if (num[i] != 0 && num[j] != 0) {
				sum += num[i] * num[j];
			}
			
		}
	}
	printf("%d", sum);
}
