


template<typename type> void pyramidSort(type* array, int size) {
	type TimeEl;
	int IdEndArray = size - 1;
	while (IdEndArray != 1) {
		for (int i = size / 2 - 1; i > 0; i--) {
			if (IdEndArray < i) i = IdEndArray;
			if (array[0] < array[i]) {
				TimeEl = array[0];
				array[0] = array[i];
				array[i] = TimeEl;
			}
		}
		TimeEl = array[0];
		array[0] = array[IdEndArray];
		array[IdEndArray] = TimeEl;
		IdEndArray--;
	}


}