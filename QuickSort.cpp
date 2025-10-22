#include"QuickSort.h"

void QuickSort::Exec(int* array, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int key = array[i];
		int j = i - 1;
		while (j >= 0 && array[j] > key)
		{
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;

	}
}