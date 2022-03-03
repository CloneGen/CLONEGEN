int main () {
    int a [5] [5], i, j, max [5] = {0}, min [5] = {2147483647, 2147483647, 2147483647, 2147483647, 2147483647}, f = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cin >> a[i][j];
            if (max[i] < a[i][j])
                max[i] = a[i][j];
            if (min[j] > a[i][j])
                min[j] = a[i][j];
        }
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (min[j] == max[i] && a[i][j] == min[j]) {
                cout << i + 1 << " " << j + 1 << " " << a[i][j];
                f = 1;
            }
        }
    }
    if (f == 0)
        cout << "not found" << endl;
    return 0;
}

