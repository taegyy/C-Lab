#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int arr[1001];
int main() {
	int n, s, m = 0;
	scanf("%d%d%d", &n, &s, &m);
	int cnt1 = 0;
	int cnt2 = 0;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (int i = s; i <= n; i++) {
		if (arr[i] != 0) {
			if (arr[i] <= m) {
				cnt1 = (i-s) * 10;
				break;
			}
		}
		//printf("%d ", arr[i]);
	}
	
	for (int i = s; i > 0; i--) {
		if (arr[i] != 0) {
			if (arr[i] <= m) {
				cnt2 = (s-i) * 10;
				break;
			}
		}
		//printf("%d ", arr[i]);
	}
	if (cnt1 == 0) {
		printf("%d", cnt2);
	}
	else if (cnt2 == 0) {
		printf("%d", cnt1);
	}
	else {
		printf("%d", cnt1 > cnt2 ? cnt2 : cnt1);
	}

	
}
