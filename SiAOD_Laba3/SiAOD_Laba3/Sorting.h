#pragma once
#include <algorithm>
#include "ArrayOfNumber.h"

class Sorting {
public:
	virtual ~Sorting() {}
	virtual void SortArr(const ArrayOfNumber& arr, int size) const = 0;
};