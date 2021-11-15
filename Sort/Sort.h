#pragma once
#include <vector>
#include <iostream>

class Sorting
{
public:
	Sorting(const std::vector<int> &);
	void swap(int, int);

	void bubbleSort();
	void insertSort();
	void selectionSort();
	void quickSort();
	void print() const;

private:
	std::vector<int> orginal, sorted;
	void qsort1(int, int);
	void qsort2(int, int);

};

