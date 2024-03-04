#include <iostream>

using namespace std;

void rand_init(int* array, int size, int min, int max);
string convert_array_string(int* array, int size);
void insertionSort(int* array, int size);

int main() {
	int size = 0;

	do
	{
		cout << "Input array size : ";
		cin >> size;
	} while (size < 1);

	int* firstArray = new int[size];
	int* secondArray = new int[size];

	rand_init(firstArray, size, -10, 10);
	rand_init(secondArray, size, -10, 10);
	cout << "Unsorted first vector :" << convert_array_string(firstArray, size) << endl;
	cout << "Unsorted second vector :" << convert_array_string(secondArray, size) << endl;

	insertionSort(firstArray, size);
	insertionSort(secondArray, size);

	cout << "Sorted first vector :" << convert_array_string(firstArray, size) << endl;
	cout << "Sorted second vector :" << convert_array_string(secondArray, size) << endl;

	cout << "Resulting vector : ";

	delete[] firstArray;
	delete[] secondArray;

	return 0;
}