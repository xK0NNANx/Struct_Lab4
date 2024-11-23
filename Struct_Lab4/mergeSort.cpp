#include <iostream>

template<typename type> void mergeSort(type* array, int size) {

	int NewSize1 = size / 2;
	int NewSize2 = NewSize1 + 1;
	type* leftArray = new type[NewSize1];
	int sizeLeftArray = 0;
	type* rightArray = new type[NewSize2];
	int sizeRightArray = 0;
	if (size > 1) {
		for (int i = 0; i < size; i++) {
			if (i < size / 2) {
				leftArray[sizeLeftArray] = array[i];
				sizeLeftArray++;
			}
			else {
				rightArray[sizeRightArray] = array[i];
				sizeRightArray++;
			}
		}

		mergeSort(leftArray, sizeLeftArray);
		mergeSort(rightArray, sizeRightArray);

		int iForLeftArray = 0;
		int iForRightArray = 0;
		int iForFinalArray = 0;
		while (iForLeftArray < sizeLeftArray or iForRightArray < sizeRightArray) {
			if (iForLeftArray == sizeLeftArray) {
				array[iForFinalArray] = rightArray[iForRightArray];
				iForFinalArray++;
				iForRightArray++;
			}
			if (iForRightArray == sizeRightArray) {
				array[iForFinalArray] = leftArray[iForLeftArray];
				iForFinalArray++;
				iForLeftArray++;
			}
			if (iForLeftArray < sizeLeftArray and iForRightArray < sizeRightArray) {
				if (leftArray[iForLeftArray] < rightArray[iForRightArray]) {
					array[iForFinalArray] = leftArray[iForLeftArray];
					iForFinalArray++;
					iForLeftArray++;
				}
				else
				{
					array[iForFinalArray] = rightArray[iForRightArray];
					iForFinalArray++;
					iForRightArray++;

				}
			}
		}
	}

}