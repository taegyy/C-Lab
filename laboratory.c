#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int arr[100000001];
int main()
{
    long long int a, b;
    long long int k = 0;
    scanf("%lld %lld", &a, &b);
    for (long long int i = 1; i * i < b; i++) {
        if (b % i == 0) {
            arr[i] = 1;
            arr[b / i] = 1;
        }
    }
    for (long long int i = 1; i * i < b; i++) {
        if (arr[i] != 0) {
            printf("%d ", i);
        }
    }


}