int main () {
    int a [5] [5], min, k, m, g = 0, num;
    for (int i = 0;
    i < 5; i++) {
        for (int j = 0;
        j < 5; j++) {
            cin >> k;
            a[i][j] = k;
        }
    }
    for (int n = 0;
    n < 5; n++) {
        int max = 0;
        for (int j = 0;
        j < 5; j++) {
            if (a[n][j] > max) {
                max = a[n][j];
                num = j;
            }
        }
        min = max;
        for (m = 0; m < 5; m++) {
            if (a[m][num] < min)
                break;
        }
        if (m == 5) {
            cout << n + 1 << " " << num + 1 << " " << min << endl;
            g++;
        }
    }
    if (g == 0)
        cout << "not found" << endl;
    return 0;
}

