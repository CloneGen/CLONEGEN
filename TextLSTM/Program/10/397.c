int main () {
    int k, height [25], start [25], max = 0, h, i, j, q;
    scanf ("%d", &k);
    for (h = 0; h < k; h++) {
        scanf ("%d", &height[h]);
        start[h] = 1;
    }
    for (i = k - 2; i >= 0; i--) {
        for (j = i + 1; j < k; j++) {
            if (height[j] <= height[i] && start[j] + 1 > start[i]) {
                start[i] = start[j] + 1;
            }
        }
    }
    for (q = 1; q < k; q++) {
        if (start[q] > start[max]) {
            max = q;
        }
    }
    printf ("%d", start[max]);
    return 0;
}

