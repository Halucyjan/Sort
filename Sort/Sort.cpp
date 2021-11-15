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
		for (int j = i + 1; j < sorted.size(); j++)
		{
			if (sorted[j] < sorted[i])
			{
				this->swap(i, j);
			}
		}
	}
}

void Sorting::insertSort()
{
	sorted = orginal;
	for (int i = 1; i < sorted.size(); i++)
	{
		int value = sorted[i];
		int j = i;
		while (j > 0 and sorted[j - 1] > value)
		{
			sorted[j] = sorted[j - 1];
			j--;
		}
		sorted[j] = value;
	}
}

void Sorting::selectionSort()
{
	sorted = orginal;
	for (int i = 0; i + 1 < sorted.size(); i++)
	{
		int smallest = i;
		for (int j = i + 1; j < sorted.size(); j++)
		{
			if (sorted[smallest] > sorted[j])
			{
				smallest = j;
			}
		}
		if (smallest != i)
			this->swap(smallest, i);
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


