int main () {
    int n, range;
    cin >> range;
    n = range;
    int a [102] [102], (*p) [102] = a;
    int i, j, k, q, sum = 0;
    for (i = 0; i < range; i++) {
        sum = 0;
        n = range;
        int minrow = 999999, mincol = 999999;
        for (j = 0; j < n; j++)
            for (k = 0; k < n; k++)
                cin >> *(*(p + j) + k);
        for (; n > 1;) {
            for (j = 0; j < n; j++) {
                for (k = 0; k < n; k++)
                    if (*(*(p + j) + k) < minrow)
                        minrow = *(*(p + j) + k);
                for (k = 0; k < n; k++)
                    *(*(p + j) + k) = *(*(p + j) + k) - minrow;
                minrow = 999999;
            }
            for (k = 0; k < n; k++) {
                for (j = 0; j < n; j++)
                    if (*(*(p + j) + k) < mincol)
                        mincol = *(*(p + j) + k);
                for (j = 0; j < n; j++)
                    *(*(p + j) + k) = *(*(p + j) + k) - mincol;
                mincol = 999999;
            }
            sum += *(*(p + 1) + 1);
            if (n == 2)
                break;
            for (j = 1; j <= n - 2; j++) {
                for (k = 0; k < n; k++)
                    *(*(p + j) + k) = *(*(p + j + 1) + k);
            }
            for (j = 1; j <= n - 2; j++) {
                for (k = 0; k < n; k++)
                    *(*(p + k) + j) = *(*(p + k) + j + 1);
            }
            n--;
        }
        cout << sum << endl;
    }
    return 0;
}

