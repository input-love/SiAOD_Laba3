#pragma once
#include "Sorting.h"

class HeapSort final : public Sorting {
public:
	void SortArr(const ArrayOfNumber& arr, int size) const;
private:
	void heapify(const ArrayOfNumber& arr, int size, int i) const;
};
