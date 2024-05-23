#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int map[10001];

int main() {
	int m = 0;
	int k = 0;
	int max = 0;
	int temp = 0;
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		scanf("%d", &k);
		map[m] = k;
		if (max < m) {
			max = m;
		}
	}

	for (int i = 0; i <= max; i++) {
		if (map[i] != 0) {
			if (map[i + map[i]] != 0) {

				temp = i + map[i];

				if (map[temp] + temp == i) {
					printf("YES");
					return 0;
				}
			}

		}
	}printf("NO");

}


