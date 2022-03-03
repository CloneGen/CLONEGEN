void r (int m);
void l (int m);
void fun (int m);
void Try (int i);
int a [100] [100], n, s [100] = {0};

int main () {
    int i, j, k, sum;
    cin >> n;
    for (i = 0; i < n; i++) {
        sum = 0;
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++)
                cin >> a[j][k];
        }
        Try (0);
        for (j = 0; j < n - 1; j++)
            sum = sum + s[j];
        cout << sum << endl;
    }
    return 0;
}

void r (int m) {
    int x, y, min;
    for (x = 0; x < m; x++) {
        min = a[x][0];
        for (y = 0; y < m; y++) {
            if (a[x][y] < min)
                min = a[x][y];
        }
        for (y = 0; y < m; y++)
            a[x][y] = a[x][y] - min;
    }
}

void l (int m) {
    int x, y, min;
    for (y = 0; y < m; y++) {
        min = a[0][y];
        for (x = 0; x < m; x++) {
            if (a[x][y] < min)
                min = a[x][y];
        }
        for (x = 0; x < m; x++)
            a[x][y] = a[x][y] - min;
    }
}

void fun (int m) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 2; j < m; j++)
            a[i][j - 1] = a[i][j];
    }
    for (j = 0; j < m - 1; j++) {
        for (i = 2; i < m; i++)
            a[i - 1][j] = a[i][j];
    }
}

void Try (int i) {
    r (n - i);
    l (n - i);
    s[i] = a[1][1];
    fun (n - i);
    if (i < n - 1)
        Try (i + 1);
}

