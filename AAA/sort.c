int selectSortUpgraded(int arr[], int n) {
    int i, j, min_idx;
    int Cf = 0;
    int Mf = 0;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            Cf += 1;
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (arr[min_idx] != arr[i]) {
            swap(&arr[min_idx], &arr[i]);
            Mf += 3;
        }
    }
    return (Mf+Cf);
}
