#include <stdio.h>

typedef struct 
{
	const char *name;
	const char *species;
	int age;
} turtle;

void happy_birthday(turtle *t){
	t->age = t->age + 1;
	printf("Happy birthday, %s\n! You are now %i years old!\n",t->name,t->age);
}

int main(int argc, char const *argv[])
{
	turtle myturtle = {"Turtlee","Turtle",99};
	happy_birthday(&myturtle);
	printf("%s lived for %i years\n",myturtle.name,myturtle.age );
	return 0;
}