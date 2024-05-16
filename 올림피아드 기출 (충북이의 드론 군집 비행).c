#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
char st[10][10];

int main() {
	int n = 0;
	int n1, n2 = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	scanf("%d", &n);



		for (int i = 0; i < n; i++) {
		a = b = c = d = 0;
		scanf("%d%d", &n1, &n2);

		for (int h = 1; h <= n1; h++) {
			scanf("%s", st[h]+1);
		}


		for (int j = 1; j <= n1; j++) {
			for (int k = 1; k <= n2; k++) {
				if (st[j][k] == 'D' && !(a + b)) {
					a = j;
					b = k;
				}
			}
		}
		
		for (int j = 1; j <= n2; j++) {
			for (int k = 1; k <= n1; k++) {
				if (st[k][j] == 'D' && !(c + d)) {
					c = k;
					d = j;
				}
			}
		}
		if (a == c && b == d) {
			printf("O\n");
		}
		else {
			printf("X\n");
		}
	}


	
}
