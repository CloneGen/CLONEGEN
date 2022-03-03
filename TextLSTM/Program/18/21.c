int guiling (int count);
int xiaojian (int count);
int n;
int a [101] [101];

int main () {
    int i, j, k;
    cin >> n;
    for (i = 1; i <= n; i++) {
        int sum = 0;
        for (j = 0; j < n; j++)
            for (k = 0; k < n; k++) {
                cin >> a[j][k];
            }
        for (int count = n;
        count > 1; count--) {
            guiling (count);
            sum += a[1][1];
            xiaojian (count);
        }
        cout << sum << endl;
    }
    return 0;
}

int guiling (int count) {
    int j, k;
    for (j = 0; j < count; j++) {
        int min = a[j][0];
        for (k = 1; k < count; k++) {
            if (min > a[j][k]) {
                min = a[j][k];
            }
        }
        for (k = 0; k < count; k++) {
            a[j][k] -= min;
        }
    }
    for (k = 0; k < count; k++) {
        int min = a[0][k];
        for (j = 1; j < count; j++) {
            if (min > a[j][k]) {
                min = a[j][k];
            }
        }
        for (j = 0; j < count; j++) {
            a[j][k] -= min;
        }
    }
}

int xiaojian (int count) {
    int j, k;
    for (j = 1; j < count - 1; j++) {
        a[0][j] = a[0][j + 1];
        a[j][0] = a[j + 1][0];
        for (k = 1; k < count - 1; k++) {
            a[j][k] = a[j + 1][k + 1];
        }
    }
}

