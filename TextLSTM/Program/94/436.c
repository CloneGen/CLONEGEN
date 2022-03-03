int main () {
    int N, i, j, k, t, count = 0;
    cin >> N;
    int a [N];
    for (i = 0; i < N; i++) {
        cin >> a[i];
        if (a[i] % 2 != 0)
            count = count + 1;
    }
    int b [count];
    k = 0;
    for (i = 0; i < N; i++) {
        if (a[i] % 2 != 0) {
            b[k] = a[i];
            k++;
        }
    }
    for (j = 1; j < count; j++) {
        for (k = 0; k < count - j; k++) {
            if (b[k] > b[k + 1]) {
                t = b[k];
                b[k] = b[k + 1];
                b[k + 1] = t;
            }
        }
    }
    for (k = 0; k < count - 1; k++) {
        cout << b[k] << ",";
    }
    cout << b[count - 1] << endl;
    return 0;
}

