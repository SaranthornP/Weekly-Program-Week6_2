#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

bool SortcheckAscending(int arr[], int n) {
	if (n == 1 || n == 0)
		return 1;

	if (arr[n - 1] < arr[n - 2])
		return 0;

	return SortcheckAscending(arr, n - 1);
}

bool SortcheckDescending(int arr[], int n) {
	if (n == 1 || n == 0)
		return 1;

	if (arr[n - 1] > arr[n - 2])
		return 0;

	return SortcheckDescending(arr, n - 1);
}

int main() {
	int i = 0;
	int a[500];
	while (a[i - 1] != 999) {
		printf("Number : ");
		scanf("%d", &a[i++]);
	}
	if (SortcheckAscending(a, i - 1))
		printf("Is sort : YES");
	else if (SortcheckDescending(a, i - 1))
		printf("Is sort : YES");
	else
		printf("Is sort : NO");
	return 0;
}