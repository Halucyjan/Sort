#include "Sort.h"

Sorting::Sorting(const std::vector<int> &data)
{
	orginal = data;
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

void Sorting::quickSort()
{
	sorted = orginal;
	int i = 0, j = sorted.size() - 1;
	this->qsort2(i, j);
}

void Sorting::qsort1(int left, int right)
{
	if (left < right)
	{
		int i = left, j = right;

		int pivot = sorted[(i + j) / 2];
		while (i < j)
		{
			while (sorted[i] < pivot)
				i++;

			while (sorted[j] > pivot)
				j--;

			this->swap(i, j);
		}

		this->print();

		this->qsort1(left, pivot - 1);


		this->qsort1(pivot + 1, right);
	}
}

void Sorting::qsort2(int left, int right)
{
	if (left < right)
	{
		int i = left -1, j = left;

		int pivot = sorted[right];

		for (j = left; j <= right; j++)
		{
			if (sorted[j] < pivot)
			{
				i++;
				this->swap(i, j);
			}
		}
		this->swap(i+1, right);
		qsort2(left, i);
		qsort2(i + 1, right);
	}

	
}

void Sorting::print() const
{
	std::cout << "orginal: ";
	for (int value : orginal)
	{
		std::cout << value << " ";
	}

	std::cout << std::endl << " sorted: ";
	for (int value : sorted)
	{
		std::cout << value << " ";
	}
	//std::cout << std::endl;
}

