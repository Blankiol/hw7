#include <stdio.h>
#include <math.h>

int Sum(double* ptr1, double* ptr2, double* ptr3, double* ptr4, double* ptr5)
{
	double ssum1 = *ptr1 + *ptr2 + *ptr3 + *ptr4 + *ptr5;
	double sum1 = ssum1 / 5;
	double a1 = *ptr1 - sum1;
	double a2 = *ptr2 - sum1;
	double a3 = *ptr3 - sum1;
	double a4 = *ptr4 - sum1;
	double a5 = *ptr5 - sum1;

	double aa1 = pow(a1, 2.0);
	double aa2 = pow(a2, 2.0);
	double aa3 = pow(a3, 2.0);
	double aa4 = pow(a4, 2.0);
	double aa5 = pow(a5, 2.0);

	double ssum2 = aa1 + aa2 + aa3 + aa4 + aa5;
	double aa = ssum2 / 5;
	double result = sqrt(aa);

	printf("%.3f\n", result);
}




int main(void)
{
	double input[5];
	printf("Enter 5 real number: ");
	scanf(" %lf %lf %lf %lf %lf", &input[0], &input[1], &input[2], &input[3], &input[4]);

	printf("Standard Deviation = ");
	Sum(&input[0], &input[1], &input[2], &input[3], &input[4]);
	return 0;
}

