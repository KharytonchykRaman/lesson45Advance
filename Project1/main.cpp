#include <iostream>

using namespace std;

void rand_init(int* array, int size, int min, int max);
string convert_array_string(int* array, int size);
void insertionSort(int* array, int size);
void sorted_array_from_two(int* firstArray, int* secondArray, int* resultingArray, int size);

int main() {
	int size = 0;

	do
	{
		cout << "Input array size : ";
		cin >> size;
	} while (size < 1);

	int* firstArray = new int[size];
	int* secondArray = new int[size];
	int* resultingArray = new int[size * 2];

	rand_init(firstArray, size, -100, 100);
	rand_init(secondArray, size, -100, 100);
	cout << "Unsorted first vector :" << convert_array_string(firstArray, size) << endl;
	cout << "Unsorted second vector :" << convert_array_string(secondArray, size) << endl;

	insertionSort(firstArray, size);
	insertionSort(secondArray, size);

	cout << "Sorted first vector :" << convert_array_string(firstArray, size) << endl;
	cout << "Sorted second vector :" << convert_array_string(secondArray, size) << endl;

	sorted_array_from_two(firstArray, secondArray, resultingArray, size);
	cout << "Resulting vector : " << convert_array_string(resultingArray, size * 2);

	delete[] firstArray;
	delete[] secondArray;
	delete[] resultingArray;

	return 0;
}