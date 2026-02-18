#include<iostream>
#define DEFAULTE_SIZE 100
using namespace std;

int main() {
	int array[DEFAULTE_SIZE];
	int length;

	do {
		system("cls");
		cout << "input size of number:";
		cin >> length;
	} while (length <= 0);

	cout << "input your array elements:";
	for (int i = 0; i < length; i++)
	{
		cin >> array[i];
	}
	int n = length / 2;
	for (int index = 0; index < n; index++)
	{
		int temp = array[index];
		array[index] = array[length - 1 - index];
		array[length - 1 - index] = temp;
	}
	return 0
}