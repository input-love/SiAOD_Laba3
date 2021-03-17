#pragma once
#include <fstream>
#include "ArrayOfNumber.h"

class PrintFile {
public:
	void outFile(const ArrayOfNumber& arr, int size) const;
};