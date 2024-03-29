#include <stdio.h>
#include <string.h>

typedef struct {
	char loc[513];
	float lat;
	float lon;
} Geo;

void printg(Geo g) {
	printf("{%s,%.3f,%.3f}\n",g.loc,g.lat,g.lon);
}

void setlat(float lat, Geo *g) {
	g->lat=lat;
}

int main(void) {
	Geo p = {"FATEC-SP",-93.52908,-46.63179};
	printg(p); // {FATEC-SP,-93.529,-46.632}
	setlat(-23.52908,&p);
	printg(p); // {FATEC-SP,-23.529,-46.632}
	return 0;
}
