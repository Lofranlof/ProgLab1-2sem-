#include "theStuff.h"

namespace stuff
{
	void swap_pointers(int *ta, int *tb)
	{
		int tmp;
		if (*ta >= *tb)
		{
			tmp = *ta % *tb;
			*ta = tmp;
		}
		else
		{
			tmp = *tb % *ta;
			*ta = tmp;
		}
	}

	void swap_links(int& ta, int& tb)
	{
		int tmp = 0;
		int numb1 = ta;
		int numb2 = tb;

		if (numb1 >= numb2)
		{
			tmp = numb1 % numb2;
			ta = tmp;
		}
		else
		{
			tmp = numb2 % numb1;
			ta = tmp;
		}
	}

	void roundUp_pointers(double* numb)
	{
		int tmp = round(*numb);
		*numb = tmp;
	}

	void roundUp_links(double& numb)
	{
		int tmp = round(numb);
		numb = tmp;
	}

	void decreaseRadius_pointers(int* radius, int* numb)
	{
		int tmpRad = *radius;
		int tmpNum = *numb;
		tmpRad = tmpRad - tmpNum;
		*radius = tmpRad;
	}

	void decreaseRadius_links(int& radius, int& numb)
	{
		int tmpRad = radius;
		int tmpNum = numb;
		tmpRad = tmpRad - tmpNum;
		radius = tmpRad;
	}

	void matrixTransposition_pointers(int matrix[3][3])
	{
		int t;
		for (int i = 0; i < 3; ++i)
		{
			for (int j = i; j < 3; ++j)
			{
				t = matrix[i][j];
				matrix[i][j] = matrix[j][i];
				matrix[j][i] = t;
			}
		}
	}

	void matrixTransposition_links(int(&matrix)[3][3])
	{
		int t;
		for (int i = 0; i < 3; ++i)
		{
			for (int j = i; j < 3; ++j)
			{
				t = matrix[i][j];
				matrix[i][j] = matrix[j][i];
				matrix[j][i] = t;
			}
		}
	}
}