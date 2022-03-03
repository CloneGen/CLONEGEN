int a [9] [9] = {0}, b [9] [9] = {0};

void breed (int n) {
    if (n == 0)
        return;
    int temp, p, q, i, j;
    for (p = 0; p < 9; p++)
        for (q = 0; q < 9; q++)
            b[p][q] = 0;
    for (p = 0; p < 9; p++)
        for (q = 0; q < 9; q++) {
            if (a[p][q] != 0) {
                temp = a[p][q];
                for (i = p - 1; i <= p + 1; i++)
                    for (j = q - 1; j <= q + 1; j++)
                        b[i][j] += temp;
            }
        }
    for (p = 0; p < 9; p++)
        for (q = 0; q < 9; q++)
            a[p][q] += b[p][q];
    breed (n - 1);
}

int main () {
    int m, n, i, j;
    cin >> m >> n;
    a[4][4] = 1;
    breed (n);
    for (i = 0; i < 9; i++) {
        cout << m * a[i][0];
        for (j = 1; j < 9; j++) {
            cout << " " << m * a[i][j];
        }
        cout << endl;
    }
    return 0;
}

