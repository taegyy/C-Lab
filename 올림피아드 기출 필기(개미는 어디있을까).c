#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int num[10001];
int dir[10001];
int main() {
	int n = 0;
	int f = 1;
	scanf("%d", &n);
	for (int i = 0; i < pow(2, n) - 1; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < n - 1; i++) {
		scanf("%d", &dir[i]);
	}

	for (int i = 0; i < n; i++) {
		if (dir[i] == 0) {
			f = f * 2;
		}
		else{
			f = f * 2 + 1;
		}

		if (num[f - 1] == 0) {
			f= f / 2;
			break;
		}
	}
	printf("%d", f);
}
