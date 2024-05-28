#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#define max_size 3

int q[max_size], f = 0, e = 0;
bool a = false;

int isFull() {
	return f == e && a == true;
}
int isEmpty(){
	return f == e && a == false;
}
void inque(int x) {
	if (isFull()) {
		printf("꽉찼음\n");
	}
	else {
		printf("inque %d\n", x);
		q[e] = x;
		e = (e + 1) % max_size;
		a = true;
	}
}
void deque() {
	if (isEmpty()) {
		printf("비었음");
	}
	else {
		printf("del %d\n", q[f]);
		f = (f + 1) % max_size;
		a = false;
	}
}
int main() {
	inque(6);
	inque(7);
	inque(8);
	inque(9);
	deque();


}


