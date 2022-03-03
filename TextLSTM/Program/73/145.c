int main () {
    int a [5] [5];
    int i = 0, j = 0, k = 0;
    int b = 0, result = 1, sum = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < 5; i++) {
        b = a[i][0];
        for (j = 0; j < 5; j++) {
            if (b < a[i][j]) {
                b = a[i][j];
            }
        }
        for (j = 0; j < 5; j++) {
            if (a[i][j] == b)
                break;
        }
        for (k = 0; k < 5; k++) {
            if (b > a[k][j]) {
                result = 0;
            }
        }
        if (result == 1) {
            cout << i + 1 << " " << j + 1 << " " << b << endl;
            sum++;
        }
        result = 1;
    }
    if (sum == 0) {
        cout << "not found" << endl;
    }
    return 0;
}

