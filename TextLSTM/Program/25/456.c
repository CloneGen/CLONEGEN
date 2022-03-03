int main () {
    int a [33] = {1}, Bit [33] = {0};
    int N;
    cin >> N;
    for (int i = 0;
    i < N; i++) {
        for (int j = 0;
        j < 32; j++) {
            a[j] = 2 * a[j] + Bit[j];
            if (a[j] > 9) {
                a[j] = a[j] - 10;
                Bit[j + 1] = 1;
            }
            else
                Bit[j + 1] = 0;
        }
    }
    for (int i = 31, Begin = 0;
    i >= 0; i--) {
        if (a[i] != 0)
            Begin = 1;
        if (Begin == 1)
            cout << a[i];
    }
    cout << endl;
    return 0;
}

