#include <iostream>
#include <iomanip>
using namespace std;

extern "C" {
	//external ASM procedures:
	void p1q2();

	//local C++ functions:
	int checkLongestDecreasing(int* intArray, int lengthOfArray);
}

int main() {
	p1q2();
	return 0;
}

int checkLongestDecreasing(int intArray[], int lengthOfArray) {
	int decLengthCount = 0;
	int longestDecLength = 0;
	cout << "[ ";
	for (int i = 1; i < lengthOfArray; i++) {
		cout << intArray[i - 1] << " ";
		if (decLengthCount > longestDecLength) {
			longestDecLength = decLengthCount;
		}
		if (intArray[i - 1] > intArray[i])
			decLengthCount++;
		else
			decLengthCount = 0;
	}
	cout << intArray[lengthOfArray - 1] << " ";
	cout << "]" << endl << endl;
	cout << "Count of the longest decreasing sequence of integer values: ";
	return longestDecLength;
}