int main () {
    int n, a [100] [100], sum, min, i, j, p, k, (*q) [100];
    q = a;
    cin >> n;
    for (p = 0; p < n; p++) {
        sum = 0;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                cin >> *(*(q + i) + j);
        for (k = n; k >= 2; k--) {
            for (i = 0; i < k; i++) {
                for (j = 0; j < k; j++) {
                    if (j == 0)
                        min = *(*(q + i) + j);
                    else {
                        if (*(*(q + i) + j) < min)
                            min = *(*(q + i) + j);
                    }
                }
                for (j = 0; j < k; j++) {
                    *(*(q + i) + j) = *(*(q + i) + j) - min;
                }
            }
            for (i = 0; i < k; i++) {
                for (j = 0; j < k; j++) {
                    if (j == 0)
                        min = *(*(q + j) + i);
                    else {
                        if (*(*(q + j) + i) < min)
                            min = *(*(q + j) + i);
                    }
                }
                for (j = 0; j < k; j++) {
                    *(*(q + j) + i) = *(*(q + j) + i) - min;
                }
            }
            sum += *(*(q + 1) + 1);
            for (i = 1; i < k - 1; i++) {
                *(*(q + 0) + i) = *(*(q + 0) + i + 1);
            }
            for (i = 1; i < k - 1; i++) {
                *(*(q + i) + 0) = *(*(q + i + 1) + 0);
            }
            for (i = 1; i < k - 1; i++)
                for (j = 1; j < k - 1; j++) {
                    *(*(q + i) + j) = *(*(q + i + 1) + j + 1);
                }
        }
        cout << sum << endl;
    }
    return 0;
}

