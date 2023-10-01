#include <stdio.h>

struct exercise
{
	const char *description;
	float duration;
};

struct meal
{	
	float weight;
	const char *ingredients;
};

struct preferences
{	struct meal food;
	struct exercise exercise;
	
};

struct fish
{
	const char *name;
	const char *species;
	int teeth;
	int age;
	struct preferences care;	
};

void lable(struct fish f){
	printf("Nickname %s\nType:%s\n%i years old,%i teeth\n",f.name,f.species,f.age,f.teeth);
	printf("Give %2.2f kg of %s and allow %s for %2.2f hours\n",f.care.food.weight,f.care.food.ingredients,f.care.exercise.description,f.care.exercise.duration);
}

int main(int argc, char const *argv[])
{
	struct fish snappy = {"Teethcruncher","pirahna",4,69,{{0.09,"Meat"},{"swim",7.50}}};
	lable(snappy);
	return 0;
}