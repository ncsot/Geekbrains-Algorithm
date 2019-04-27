#include <stdio.h>
#include <math.h>
#include <limits.h>


int main(int argc, char const *argv[])
{
	unsigned long long int userNumber;

	
	int isAutomorphic(unsigned long long int checkNumber) 
	{
		unsigned long long int checkNumberPow = checkNumber * checkNumber;
		int flag = 0;
		while(checkNumber > 0) {
			/*printf("call func. checkNumber = %llu\n", checkNumber);*/
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
			printf("automorph numb = %llu\n", userNumber);
		}
		userNumber = userNumber - 1;
	}
	return 0;
}