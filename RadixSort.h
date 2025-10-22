#pragma once
#include "Sort.h"

class RadixSort : public Sort
{
public:
	virtual void Exec(int* array, int size) override;
};