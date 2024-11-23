

template<typename type> void CombSort(type* array, int size) {
	int space = size;
	bool change = 1;
	while (space != 1) {
		for (int i = 0; i + space < size; i++) {
			if (array[i] > array[i + space]) {
				type timeEl = array[i];
				array[i] = array[i + space];
				array[i + space] = timeEl;
			}
		}
		space = space / 1.3;
		if (space < 1) space = 1;
	}
	for (int i = 0; i + space < size; i++) {
		if (array[i] > array[i + space]) {
			type timeEl = array[i];
			array[i] = array[i + space];
			array[i + space] = timeEl;
		}
	}
}