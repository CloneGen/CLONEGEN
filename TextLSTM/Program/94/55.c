int main () {
    int N, num, i, j, temp;
    int a [510];
    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> num;
        a[i] = num;
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N -i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < N; i++) {
        if (a[i] % 2 != 0) {
            if (i == 0)
                cout << a[i];
            else
                cout << "," << a[i];
        }
    }
    return 0;
}

