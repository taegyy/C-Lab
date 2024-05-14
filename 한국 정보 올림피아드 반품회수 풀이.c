#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int house[10001];
int houst[10001];
int map[10001];

int main() {
	int n = 0;
	int time = 0;
	int last = 0;
	int t = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &house[i]);
		if (i == n - 1) {
			last = house[i];
		}
	}
	t = last;

	for (int i = 0; i < n; i++) {
		scanf("%d", &houst[i]);
	}
	for (int i = 0; i < n; i++) {
		map[house[i]] = houst[i];
	}


	while (1) {//go
		time++;
		if (map[time] < time) {
			map[time] = 0;
		}
		
		

		if (time == last) {
			
			break;
		}
	}


	while (1) {//back
		time++;
		if (map[t] < time) {
			map[time] = 0;
			t--;
		}

		if (t <= 0) {
			
			break;
			
		}
		
	}

	printf("%d", time);
	
}
