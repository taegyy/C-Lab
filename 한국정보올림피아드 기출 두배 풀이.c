#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int s[10001];
int main() {
	int n = 0;
	int cnt = 0;
	int cntt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) { 
		scanf("%d", &s[i]);
	}
	
	while (1) {
		//cntt = 0;
		for (int i = 0; i < n-1; i++) {
			if (s[i] > s[i + 1]) {
				s[i + 1] = s[i + 1] * 2;
				cnt++;
				//printf("%d\n", cnt);
			}
			
		}
		if (cnt == 0) {
			printf("%d", cntt);
			break;
			
		}
		else {
			cntt += cnt;
			cnt = 0;
		}
	}

}


