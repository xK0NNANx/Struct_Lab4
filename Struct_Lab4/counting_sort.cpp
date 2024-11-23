


template<typename type> void CountingSort(type* array, int size, int MaxNumb) {
	int* CoutElArray = new int[MaxNumb+1];
	for (int i = 0; i < MaxNumb + 1; i++) {
		CoutElArray[i] = 0;
	}
	for (int i = 0; i < size; i++) {
		CoutElArray[array[i]]++;
	}
	int j = 0;
	for (int i = 0; i != MaxNumb + 1; i++) {
		while (CoutElArray[i] != 0) {
			array[j] = i;
			CoutElArray[i]--;
			j++;
		}
	}
}