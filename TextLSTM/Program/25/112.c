int main () {
    int N, i, j, m;
    unsigned a [31], b [31];
    memset (a, 0, sizeof (a));
    a[0] = 1;
    for (i = 1; i < 31; i++)
        a[i] = 0;
    cin >> N;
    if (N == 0)
        cout << "1" << endl;
    else {
        for (m = 0; m < N; m++) {
            memset (b, 0, sizeof (b));
            i = 30;
            while (a[i] == 0)
                i--;
            for (j = 0; j <= i; j++)
                b[j] = a[j] * 2;
            for (j = 0; j < i + 1; j++) {
                if (b[j] >= 10) {
                    b[j + 1] += b[j] / 10;
                    b[j] %= 10;
                }
            }
            for (j = 0; j < i + 2; j++)
                a[j] = b[j];
        }
        j = i + 1;
        while (b[j] == 0)
            j--;
        for (; j >= 0; j--)
            cout << b[j];
        cout << endl;
    }
    return 0;
}

