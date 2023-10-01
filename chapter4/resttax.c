#include <stdio.h>


float total = 0.0;
int count = 0;
short tax_percent = 6;

float add_with_tax(float f)
{
float tax_rate = 1 + tax_percent / 100.0;
total = total + (f * tax_rate);
count = count + 1;
return total;
}



int main(int argc, char const *argv[])
{
	float val;
	printf("Dish price: ");
	while (scanf("%f",&val) == 1){
		printf("Current final price: %.2f\n",add_with_tax(val));
		printf("Dish price: ");
	}
	printf("\nTotal: %.2f\n", total);
	printf("Number of dishes: %hi\n",count);
	return 0;
}
