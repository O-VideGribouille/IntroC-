#include "CPoint.h"
#include <stdio.h>

void CPoint::afficheLog() const
{

	printf("Point en x : %d", p.n_x);
	printf("Point en y : %d", p.n_y);

}

int CPoint::getX()
{
	return n_x;
}

int CPoint::getY()
{
	return n_y;
}

int CPoint::setX(int n_x)
{
	this->n_x = n_x;
}

int CPoint::setY(int n_y)
{
	this->n_y = n_y;
}
