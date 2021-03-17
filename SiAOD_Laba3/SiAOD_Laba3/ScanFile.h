#pragma once
#include <fstream>
#include <stdexcept>
#include "ArrayOfNumber.h"

class ScanFile {
public:
	void Recording(const ArrayOfNumber& arr, int size, const std::string& name_file) const;
};