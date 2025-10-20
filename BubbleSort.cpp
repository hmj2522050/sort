#include "BubbleSort.h"

void BubbleSort::Exec(int* array, int size) 
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                Swap(array[j], array[j + 1]);
            }
        }
    }
}