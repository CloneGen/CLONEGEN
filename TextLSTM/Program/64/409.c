int main () {
    int n, i, j, k, z = 0;
    double dis [50] [7], zb [10] [3], temp;
    double (*p) [7];
    p = dis;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> zb[i][0] >> zb[i][1] >> zb[i][2];
    }
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++) {
            for (k = 0; k < 3; k++) {
                *(*(p + z) + k) = zb[i][k];
                *(*(p + z) + k + 3) = zb[j][k];
            }
            *(*(p + z) + 6) = sqrt (pow ((*(*(p + z) + 0) - *(*(p + z) + 3)), 2) + pow ((*(*(p + z) + 1) - *(*(p + z) + 4)), 2) + pow ((*(*(p + z) + 2) - *(*(p + z) + 5)), 2));
            z++;
        }
    for (i = 0; i < z - 1; i++)
        for (j = 0; j < z - i - 1; j++) {
            if (fabs (*(*(p + j) + 6) - *(*(p + j + 1) + 6)) < 1e-3)
                continue;
            else if (*(*(p + j) + 6) < *(*(p + j + 1) + 6)) {
                for (k = 0; k < 7; k++) {
                    temp = *(*(p + j) + k);
                    *(*(p + j) + k) = *(*(p + j + 1) + k);
                    *(*(p + j + 1) + k) = temp;
                }
            }
        }
    for (i = 0; i < n * (n - 1) / 2; i++) {
        cout << fixed;
        cout << setprecision (0) << "(" << *(*(p + i) + 0) << "," << *(*(p + i) + 1) << "," << *(*(p + i) + 2) << ")-(" << *(*(p + i) + 3) << "," << *(*(p + i) + 4) << "," << *(*(p + i) + 5) << ")=";
        cout << setprecision (2) << *(*(p + i) + 6) << endl;
    }
    return 0;
}

