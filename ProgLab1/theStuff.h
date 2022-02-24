#pragma once
#include <cmath>

namespace stuff
{
	void swap_pointers(int*, int*);
	void swap_links(int&, int&);
	
	void roundUp_pointers(double*);
	void roundUp_links(double&);

	void decreaseRadius_pointers(int*, int*);
	void decreaseRadius_links(int&, int&);

	void matrixTransposition_pointers(int array[3][3]);
	void matrixTransposition_links(int (&array)[3][3]);

}