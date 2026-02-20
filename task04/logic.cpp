
#include "logic.h"

int max(int array[DEFAULT_SIZE], int length) {
	int value = array[0];

	for (int index = 1; index < length; index++)
	{
		if (value < array[index]) {
			value = array[index];
		}
	}

	return value;
}

int min(int array[DEFAULT_SIZE], int length) {
	int value = array[0];

	for (int index = 1; index < length; index++)
	{
		if (value > array[index]) {
			value = array[index];
		}
	}

	return value;
}

double arithmetial_average(int array[DEFAULT_SIZE], int length) {
	double avg = 0;

	for (int index = 0; index < length; index++)
	{
		avg += array[index];
	}

	return avg / length;
}

double geometrical_average(int array[DEFAULT_SIZE], int length) {
	double avg = 1;

	for (int index = 0; index < length; index++)
	{
		avg *= array[index];
	}

	return pow(avg, 1.0 / length);
}
