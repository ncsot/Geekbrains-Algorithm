#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
	unsigned long long int userNumber;
	long int cntAutomorph = 0;
	
	int isAutomorphic(unsigned long long int checkNumber) 
	{
		unsigned long long int checkNumberPow = checkNumber * checkNumber;
		int flag = 0;
		while(checkNumber > 0) {
			if(checkNumber%10 != checkNumberPow%10) {
				flag = 1;
				break;
			}
			checkNumber /= 10;
			checkNumberPow /= 10;
		}
		return flag;
	}

	printf("Enter number from 1 to %llu: \n", sqrt(ULLONG_MAX));
	scanf("%llu", &userNumber);
	while(userNumber > 0) {
		if (isAutomorphic(userNumber) == 0)
		 {
			printf("automorph number = %llu\n", userNumber);
			cntAutomorph++;

		}
		userNumber = userNumber - 1;
	}
	printf("Total number= %ld\n", cntAutomorph);
	return 0;
}