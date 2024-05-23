#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int map1[10001];
int map2[10001];
int main() {
	int m = 0;
	int k = 0;
	
	int temp = 0;
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &map1[i]);
		scanf("%d", &map2[i]);
		
		
	}

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			if (i != j) {
				if (map1[i] + map2[i] == map1[j]) {
					if (map1[j] + map2[j] == map1[i]) {
						printf("YES");
						return 0;
					}
				}
			}
		}
	}printf("NO");

}


