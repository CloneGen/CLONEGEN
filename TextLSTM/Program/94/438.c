int main () {
    int a [1000] = {0};
    int N, k;
    cin >> N;
    int num = 0;
    for (int i = 1;
    i <= N; i++) {
        cin >> k;
        if (k % 2 != 0) {
            a[k] = k;
            num = num + 1;
        }
    }
    int count = 1;
    for (int i = 1;
    i < 1000; i++) {
        if ((a[i] != 0) && (count == num)) {
            cout << a[i];
        }
        if ((a[i] != 0) && (count != num)) {
            cout << a[i] << ',';
            count = count + 1;
        }
    }
    return 0;
}

