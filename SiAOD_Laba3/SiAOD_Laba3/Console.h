#pragma once
#include <iostream>
#include "Sorting.h"
#include "ShapeFactory.h"
#include "ScanFile.h"
#include "PrintFile.h"
#include "ArrayOfNumber.h"

class Console {
public:
    ~Console();
    void start();
private:
    int dialog_get_check();
    std::string dialog_get_name_file();
    int dialog_get_size();

    Sorting* _sort = nullptr;
};