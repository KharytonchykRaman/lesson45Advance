#include <iostream>
#include <string>

using namespace std;

void rand_init(int* array, int size, int min, int max) {
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (max - min + 1) + min;
	}
}

string convert_array_string(int* array, int size) {
	string msg = "";

	for (int i = 0; i < size; i++)
	{
		msg += to_string(array[i]) + " ";
	}
	return msg;
}

void insertionSort(int* array, int size) {

	for (int i = 0; i < size; i++)
	{
		int key = array[i];
		int j = i - 1;

		while (key < array[j] && j >= 0)
		{
			array[j + 1] = array[j];
			--j;
		}
		array[j + 1] = key;
	}
}

void sorted_array_from_two(int* firstArray, int* secondArray, int* resultingArray, int size) {

	int j = 0;
	int q = 0;
	for (int i = 0; i < size * 2; i++)
	{
		if (firstArray[j] < secondArray[q])
		{
			resultingArray[i] = firstArray[j];
			j++;
		}
		else {
			resultingArray[i] = secondArray[q];
			q++;
		}
	}
}