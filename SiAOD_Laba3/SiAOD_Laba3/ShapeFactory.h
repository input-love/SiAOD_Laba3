#pragma once
#include "Sorting.h"
#include "Choice.h"
#include "HeapSort.h"

class ShapeFactory {
public:
	Sorting* createShape(int check);
};