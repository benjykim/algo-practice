#include <stdio.h>

int main()
{
	int n, i, j, tmp, arr[1000];
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
}
