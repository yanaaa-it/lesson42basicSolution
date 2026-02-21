#include"util.h"

int main() {
	int array[DEFAULT_SIZE];
	int length;

	do {
		system("cls");
		cout << "Input size of array: ";
		cin >> length;
	} while (length <= 0);



	user_init(array, length);
	print("Result array:\n min number:",min( array,  length));
	print("max number:",max(array, length));
	print("arithmetial average number : ",arithmetial_average(array, length));
	print("geometrical average number:",geometrical_average(array, length));

	return 0;
}
