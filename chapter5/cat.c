#include <stdio.h>

typedef struct
{
	float tank_capacity;
	int tank_psi;
	const char *suit_material
} equipment;

typedef struct scuba
{
	const char *name;
	equipment kit; 
} diver;

void badge (diver d){
printf("Nickname: %s\nTank: %2.2f(%i)\n Costume: %s\n",d.name,d.kit.tank_capacity,d.kit.tank_psi,d.kit.suit_material);
}

int main(int argc, char const *argv[])
{
	diver randy = {"Randy",{5.5,3500,"what"}};
	badge(randy);
	return 0;
}