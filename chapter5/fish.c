#include <stdio.h>

struct preferences{
	const char *food;
	int exercise_hours;
};

struct fish{
	const char *name;
	const char *species;
	int teeth;
	int age;
	struct preferences care;
};

void catalog(struct fish f){
	printf("%s - is %s with %i teeth. He is %i years old\n. His favorite food is %s and he like to work only %i hours.",f.name,f.species,f.teeth,f.age,f.care.food,f.care.exercise_hours);
}

void lable(struct fish f){
	printf("Nickname:%s\nType:%s\n%i years, %i teeth\n",f.name,f.species,f.age,f.teeth);
}

int main(int argc, char const *argv[])
{	
		struct fish snappy = {"Teethcruncher","piranha",69,4,{"Meat",5.2}};
		catalog(snappy);
		lable(snappy);
	return 0;
}