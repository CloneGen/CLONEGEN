int main () {
    int n, x;
    int a [550];
    int k = 0, temp, judge = 0;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> x;
        if (x % 2 == 1) {
            a[k] = x;
            k++;
        }
    }
    for (int j1 = 0;
    j1 < k - 2; j1++) {
        for (int j = 0;
        j < k - 1 - j1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i1 = 0;
    i1 < k; i1++) {
        if (judge == 1) {
            cout << "," << a[i1];
        }
        if (judge == 0) {
            cout << a[0];
            judge = 1;
        }
    }
    cout << endl;
    return 0;
}

