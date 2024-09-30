#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

unsigned long long fibonacci(int n){
	if (n == 0) return 0;
	if (n == 1) return 1;

	unsigned long long a = 0, b = 1, temp;
	for (int i = 2; i <= n; i++) {
		temp = a + b;
		a = b;
		b = temp;
	}

	return b;
}

bool est_premier(unsigned long long n) {
	if (n < 2) return false;
	for (unsigned long long i = 2; i * i <= n; i++){
		if (n % i == 0) return false;
	}

	return true;
}

int main(){
	int barnabe = -36;
	int barnabeH = 44;
	int fib_index = 22;
	unsigned long long fib22, premier;

	fib22 = fibonacci(fib_index);

	premier = fib22 + 1;
	do{
		premier ++;
	}while(!est_premier(premier));

	barnabeH = barnabeH + premier;
	printf("Bernabé est à %d mètre de hauteur.\n", barnabeH);

	return 0;
}