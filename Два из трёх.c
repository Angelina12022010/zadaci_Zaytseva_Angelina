//Олимпиадное задание №1 "Два из трёх"
//Нет ответа с большими числами
#include <stdio.h>
#define AR_LEN 1000000
int main () {
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int n;
	scanf("%d", &n);
	
	int arr[AR_LEN];
	int i;
	int count = 1;

	
	for (i = 0; i <= AR_LEN; i = i + 1) {
		if ((i % a == 0 && i % b == 0 && i % c != 0 ) || (i % a == 0 && i % b != 0 && i % c == 0 ) || (i % a != 0 && i % b == 0 && i % c == 0 )) {
			arr[count] = i;
			count = count + 1;
		}
	}
	
	if (count == 0) {
		printf("-1");
	}
	else {
		printf("%d", arr[n]);
	}
	
	
	return 0;
}
