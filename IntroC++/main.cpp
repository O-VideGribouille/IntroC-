#include "Tpoint.h"
#include "CPoint.h"
#include <stdio.h>

int main() {

/*	Tpoint p;
	p.n_x = 0;
	p.n_y = 0;

	affichelog(p);*/

	//Instance de la classe CPoint
	CPoint p;

	p.setX(0);
	p.setY(0);

	//p.afficheLog();
	//Sans accès, il est tout à fait noral que rien ne s'affiche après le point. Les données sont privées
	
	printf("X: \n");
	afficheLog(p.getX());
	printf("Y: \n");
	afficheLog(p.getY());

	//en C++, on a le droit d'avoir le même nom, si elles ont une signature différente

	float flt_f = 12.5;
	afficheLog(flt_f);

	return 0;

}


void afficheLog(int n_value) {

	printf("%d", n_value);

}

void afficheLog(float flt_value) {

	printf("%f", flt_value);

}

