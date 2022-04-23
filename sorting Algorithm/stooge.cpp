/*
	Stooge sort Algorithm
	Pseudo:
		function stoogesort(array L, i = 0, j = length(L)-1)
		 if L[j] < L[i] then
			 L[i] ↔ L[j]
		 if (j - i + 1) >= 3 then
			 t = (j - i + 1) / 3
			 stoogesort(L, i  , j-t)
			 stoogesort(L, i+t, j  )
			 stoogesort(L, i  , j-t)
		 return L
*/

#include <iostream>

typedef unsigned int UINT;

void stoogeSort(int array[], UINT i; UINT size)
{
	if (array[size] < array[i])
	{
		int temp = array[i];
		array[i] = array[size];
		array[size] = temp;
	}
	
	if ((size - i + 1) >= 3)
	{
		UINT t = (j-i+1) / 3;
		stoogeSort(array, i, size-t);
		stoogeSort(array, i+t, size);
		stoogeSort(array, i, size-t);
	}
}

int main()
{
	int test[11] = {3, 6, 1, 4, 0, 8, 2, 9, 10, 5, 7};
	UINT usize  = sizeof(test) / sizeof(test[0]);
	stoogeSort(test, 0, usize);
	
	
	for (UINT i = 0; i < usize; ++i)
	{
		std::cout << test[i] << std::endl;
	}
	
	return 0;
}
