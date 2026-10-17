//Сортировка выбором, 17.10.2026

#include <stdio.h>
#define MAX_LEN 100

int get_n (void);
void get_array (int [], int);
int options (void);

void print_array (int [], int);
void sort_array_asc (int [], int);
void sort_array_desc (int [], int);
int next_options(void);


int main () {
	int ar[MAX_LEN];
	int n = get_n(); 
	get_array(ar, n);
	int opt = options();
	while (opt != 4) {
//1. Вывод
		if (opt == 1) {
			printf("\nYour array:\n");
			print_array (ar, n);
		}
//2. Сортировка возрастание
		else if (opt == 2) {
			printf("\nYour array in ascending order:\n");
			sort_array_asc (ar, n);
			print_array (ar, n);
		}
//3. Сортировка убывание
		else if (opt == 3) {
			printf("\nYour array in descending order:\n");
			sort_array_desc (ar, n);
			print_array (ar, n);
		}
		else {
			printf("\nInvalid value! Enter '1' or '2' or '3' or '4'\n");
		}
		printf("\n");
		opt = next_options();
	}
//4. Выход
	if (opt == 4) {
		printf("Goodbye! See you later!\n");
	}
	return 0;
}

int options () {
	int option;
	printf("Select option:\n");
	printf("1. Output the array\n");
	printf("2. Sort the array in ascending order\n");
	printf("3. Sort the array in descending order\n");
	printf("4. Exit\n");
	printf("Your choose:");
	scanf("%d", &option);
	return option;
}

int get_n (void) {
	int n;
	printf("Hello! Input number:\n");
	scanf("%d", &n);
	return n;
}

void print_array (int ar[], int n) {
	int i;
	for (i = 0; i < n; i = i + 1) {
		printf("%d%s", ar[i], i < n - 1 ? ", ": "\n");
	}
}

void get_array (int ar[], int n) {
	int i = 0;
	printf("Input array:\n");
	while (i < n) {
		scanf("%d", &ar[i]);
		i = i + 1;
	}
}

void sort_array_asc (int ar[], int n) {
	int i, j, i_min, t;
	for(i = 0; i < n - 1; i = i + 1) {
		i_min = i;
		for (j = i + 1; j < n; j = j + 1) {
			if (ar[j] < ar[i_min]) {
				i_min = j;
			}
		}
		if (i != i_min) {
			t = ar[i];
			ar[i] = ar[i_min];
			ar[i_min] = t;
		}
	}
}

void sort_array_desc (int ar[], int n) {
	int i, j, i_max, t;
	for (i = 0; i < n - 1; i++) {
		i_max = i;
		for (j = i + 1; j < n; j++) {
			if (ar[j] > ar[i_max]) {  
				i_max = j;
			}
		}
		if (i != i_max) {
			t = ar[i];
			ar[i] = ar[i_max];
			ar[i_max] = t;
		}
	}
}

int next_options() {
	return options();
}
