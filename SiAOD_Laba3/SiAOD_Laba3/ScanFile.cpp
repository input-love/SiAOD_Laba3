#include "ScanFile.h"

void ScanFile::Recording(const ArrayOfNumber& arr, int size, const std::string& name_file) const 
{
	std::ifstream fin(name_file);
	if (!fin.is_open()) 
	{
		throw std::exception("��� ������ �����...");
	}
	else 
	{
		for (int i = 0; i < size; ++i) 
		{
			if (!(fin >> arr[i])) 
			{
				throw std::exception("������������ ���������� ���������...");
			}
		}
	}
	fin.close();
}