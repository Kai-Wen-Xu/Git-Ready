#include <stdio.h>

int main()
{

	float fNumber1, fNumber2;
	float Ans;
	char opt;
	printf("Enter 1st number:");
	scanf("%f", &fNumber1);
	printf("Enter 2nd number:");
	scanf("%f", &fNumber2);
	printf("Enter operator (+, -, *, /):");
	scanf(" %c", &opt);
	


	
	if (opt == '/'){
		Ans = fNumber1 / fNumber2;
	}
	
	else if (opt == '*'){
		Ans = fNumber1 * fNumber2;
	}
	
	else if (opt == '+'){
		Ans = fNumber1 + fNumber2;
	}
	
	else if (opt == '-'){
		Ans = fNumber1 - fNumber2;
	}
	printf("Answer: %.2f", Ans);
	
	return 0;
}