int main () {
    int i, m, n, N;
    double sum1 = 0, sum2 = 0, sum = 0, restsum = 0;
    cin >> N;
    if (N < 70) {
        for (i = 1; i <= N; i++)
            sum = sum + pow ((double) i, 2.0);
        n = (N -(N % 7)) / 7;
        for (i = 1; i <= n; i++)
            sum1 = sum1 + 49 * (pow ((double) i, 2.0));
        m = (N -(N % 10)) / 10;
        if (N % 10 >= 7) {
            for (i = 1; i <= m; i++)
                sum2 = sum2 + pow ((double) (10 * i + 7), 2.0);
        }
        else {
            for (i = 1; i <= m - 1; i++)
                sum2 = sum2 + pow ((double) (10 * i + 7), 2.0);
        }
        restsum = sum - sum1 - sum2;
        cout << (long) restsum << endl;
    }
    else {
        if (N >= 80) {
            for (i = 1; i <= 69; i++)
                sum = sum + pow ((double) i, 2.0);
            for (i = 1; i <= 9; i++)
                sum1 = sum1 + 49 * (pow ((double) i, 2.0));
            for (i = 1; i <= 6; i++)
                sum2 = sum2 + pow ((double) (10 * i + 7), 2.0);
            for (i = 80; i <= N; i++)
                sum = sum + pow ((double) i, 2.0);
            n = (N -(N % 7)) / 7;
            for (i = 12; i <= n; i++)
                sum1 = sum1 + 49 * (pow ((double) i, 2.0));
            m = (N -(N % 10)) / 10;
            if ((N % 10) >= 7) {
                for (i = 8; i <= m; i++)
                    sum2 = sum2 + pow ((double) (10 * i + 7), 2.0);
            }
            else {
                for (i = 8; i <= m - 1; i++)
                    sum2 = sum2 + pow ((double) (10 * i + 7), 2.0);
            }
            restsum = sum - sum1 - sum2;
            cout << (long) restsum << endl;
        }
        else {
            cout << 85596 << endl;
        }
    }
    return 0;
}

