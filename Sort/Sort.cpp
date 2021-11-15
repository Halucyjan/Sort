#include "Sort.h"

Sorting::Sorting(const std::vector<int> &in)
{
	orginal = in;
}

void Sorting::swap(int a, int b)
{
	int c = sorted[a];
	sorted[a] = sorted[b];
	sorted[b] = c;
}



void Sorting::bubbleSort()
{
	sorted = orginal;
	for (int i = 0; i + 1 < sorted.size(); i++)
	{
		//int largest = sorted[i];
		for (int j = i + 1; j < sorted.size(); j++)
		{
			if (sorted[j] < sorted[i])
			{
				this->swap(i, j);
			}
		}
	}
}

void Sorting::print() const
{
	std::cout << "orginal: ";
	for (int i = 0; i < orginal.size(); i++)
	{
		std::cout << orginal[i] << " ";
	}
	std::cout << std::endl << " sorted: ";
	for (int i = 0; i < sorted.size(); i++)
	{
		std::cout << sorted[i] << " ";
	}
}


