int main () {
    int N, k = 0, m, t;
    int a [500];
    cin >> N;
    for (int i = 0;
    i < N; i++) {
        cin >> m;
        if (m % 2) {
            a[k] = m;
            k++;
        }
    }
    for (int i = 0;
    i < k - 1; i++)
        for (int j = 0;
        j < k - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    cout << a[0];
    for (int i = 1;
    i < k; i++) {
        cout << ',' << a[i];
    }
    return 0;
}

