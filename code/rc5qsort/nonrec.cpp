void quickSort(int *data, int left, int right) {
    int len = right - left; if (len <= 1) return;
    int pivotIndex = left; int pivot = data[pivotIndex];
    int *pData = new int[len];
    int top = 0; int bottom = len - 1;
    for (int i = left; i < right; ++i) {
        if (i == pivotIndex) continue;
        if (data[i] <= pivot) pData[top++] = data[i];
        if (data[i] > pivot) pData[bottom--] = data[i];
    } pData[top] = pivot;
    for (int j=0; j<len; ++j) data[left+j] = pData[j];
    quickSortHelperExtra(data, left, left + top);
    quickSortHelperExtra(data, left + top + 1, right);
}
