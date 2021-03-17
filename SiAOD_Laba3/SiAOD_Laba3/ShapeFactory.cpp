#include "ShapeFactory.h"

Sorting* ShapeFactory::createShape(int check) 
{
	switch (check) 
	{
	case 0:
	{
		return new Choice();
	}
	case 1:
	{
		return new HeapSort();
	}
	default:
		throw std::exception("Нет подходящей конструкции класса!");
	}
}