#include <stdlib.h>
#include <math.h>
#include "PrimalityTest.h"

int isPrime(long int num) {
	if (num <= 1) {
		return 0;
	} else if (num <= 3) {
		return 1;
	}

	if (num % 2 == 0) {
		return 0;
	}

	int i;
	for (i = 3; i <= sqrt(num); i += 2) {
		if (num % i == 0) {
			return 0;
		}
	}

	return 1;
}

long int getNextPrime(long int num) {
	if (num < 2) {
		return 2;
	}

	if (num % 2 == 0) {
		num += 1;
	} else {
		num += 2;
	}

	while (isPrime(num == 0)) {
		num += 2;
	}

	return num;
}
