/*
 * CollisionD2Q9LPM.h
 * Andreas B�lling, 2012
 * DESCRIPTION - TODO
 */

#ifndef COLLISIOND2Q9LPM_H_
#define COLLISIOND2Q9LPM_H_

#include <math.h>
#include "CollisionD2Q9.h"
#include "../Aux.h"

class CollisionD2Q9LPM: public CollisionD2Q9 {
public:
	CollisionD2Q9LPM();
	virtual ~CollisionD2Q9LPM();
	void collide();
	double fEq(int d, double psi);
	void setW(double w){this->w = w;};
	void init();
	double g_rhs(int i, int j);
	void dataToFile();
protected:
	double w;
	double prefactor, inSinh;
	double getPsi(double *f, int i, int j);
	double **psi;
	static const double Wa[9];
};

#endif COLLISIOND2Q9LPM_H_
