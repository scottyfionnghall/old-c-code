#include <stdio.h>

int 
go_south_east(int lat, int lon)
{
lat = lat - 1;
lon = lon + 1;
return lat;
return lon;
}

int
main()
{
	int latitude = 32;
	int longitude = -64;

	go_south_east(latitude,longitude);
	printf("STOP! You're current coordinates are: [%i;%i]",latitude,longitude);

	return 0;
}