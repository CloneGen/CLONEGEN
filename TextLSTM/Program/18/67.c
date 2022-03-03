int a [100] [100];
int sum;

int f (int n) {
    if (n == 1)
        return 0;
    int i, j, min = 0, sum = 0;
    for (i = 0; i < n; i++) {
        min = a[i][0];
        for (j = 0; j < n; j++) {
            if (a[i][j] < min)
                min = a[i][j];
        }
        for (j = 0; j < n; j++)
            a[i][j] = a[i][j] - min;
    }
    for (i = 0; i < n; i++) {
        min = a[0][i];
        for (j = 0; j < n; j++) {
            if (a[j][i] < min)
                min = a[j][i];
        }
        for (j = 0; j < n; j++)
            a[j][i] = a[j][i] - min;
    }
    sum = sum + a[1][1];
    for (i = 0; i < n; i++) {
        for (j = 2; j < n; j++) {
            a[i][j - 1] = a[i][j];
        }
    }
    for (i = 2; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            a[i - 1][j] = a[i][j];
        }
    }
    return sum + f (n - 1);
}

int main () {
    int i, n, j, k, x, sum;
    cin >> n;
    for (i = 0; i < n; i++) {
        x = 0;
        sum = 0;
        for (j = 0; j < n; j++)
            for (k = 0; k < n; k++)
                cin >> a[j][k];
        x = f (n);
        cout << x << endl;
    }
    return 0;
}

