int a [100] [100];
int n, sum = 0;
int Sum (int);
void RowSub (int);
void ColSub (int);

int Sum (int n) {
    RowSub (n);
    ColSub (n);
    if (n == 2) {
        return a[1][1];
    }
    int k = a[1][1];
    for (int i = 1;
    i < n - 1; i++) {
        a[i][0] = a[i + 1][0];
        a[0][i] = a[0][i + 1];
        for (int j = 1;
        j < n - 1; j++) {
            a[i][j] = a[i + 1][j + 1];
        }
    }
    return k + Sum (n - 1);
}

void RowSub (int n) {
    for (int i = 0;
    i < n; i++) {
        int min = a[i][0];
        for (int j = 0;
        j < n; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
        for (int j = 0;
        j < n; j++) {
            a[i][j] = a[i][j] - min;
        }
    }
    return;
}

void ColSub (int n) {
    for (int i = 0;
    i < n; i++) {
        int min = a[0][i];
        for (int j = 0;
        j < n; j++) {
            if (a[j][i] < min) {
                min = a[j][i];
            }
        }
        for (int j = 0;
        j < n; j++) {
            a[j][i] = a[j][i] - min;
        }
    }
    return;
}

int main () {
    int i, j, k;
    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                cin >> a[j][k];
            }
        }
        cout << Sum (n) << endl;
    }
    return 0;
}

