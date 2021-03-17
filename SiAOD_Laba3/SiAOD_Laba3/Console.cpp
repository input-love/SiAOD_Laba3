#include "Console.h"

Console::~Console()
{
    delete _sort;
}

void Console::start() 
{
    try 
    {
        int check = dialog_get_check();
        _sort = ShapeFactory().createShape(check);

        std::string name_file = dialog_get_name_file();

        int size = dialog_get_size();

        ArrayOfNumber arr(size);
        ScanFile().Recording(arr, size, name_file);

        _sort->SortArr(arr, size);

        PrintFile().outFile(arr, size);
    } catch (const std::exception& exept) 
    {
        std::cout << exept.what() << std::endl;
    }
}

int Console::dialog_get_check()
{
    std::cout << "Какую сортировку выбрать?:\n 0. Choice\n 1. HeapSort" << std::endl;
    int check;
    std::cin >> check;
    return check;
}

std::string Console::dialog_get_name_file()
{
    std::cout << "Название файла?:" << std::endl;
    std::string name_file;
    std::cin >> name_file;
    return name_file;
}

int Console::dialog_get_size()
{
    std::cout << "Сколько элементов считать с файла?: " << std::endl;
    int size;
    std::cin >> size;
    return size;
}