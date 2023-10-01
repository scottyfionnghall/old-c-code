#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char const *argv[])
{
	printf("Value of INT_MAX: %i\n", INT_MAX);
	printf("Value INT_MAX: %i\n", INT_MIN);
	printf("int takes %li byte \n",sizeof(int));
	printf("Value FLT_MAX: %f\n", FLT_MAX);
	printf("Value FLT_MIN: %.50f\n",FLT_MIN);
	printf("float takes %li byte \n",sizeof(float));
	
	return 0;
}