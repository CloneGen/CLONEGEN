int main () {
    int n, a [500], s = 0, x;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        cin >> x;
        if (x % 2 == 1) {
            a[s] = x;
            s++;
        }
    }
    for (int i = 0;
    i < s - 1; i++) {
        for (int j = i + 1;
        j < s; j++) {
            if (i < j && a[i] > a[j]) {
                int swi = a[i];
                a[i] = a[j];
                a[j] = swi;
            }
        }
    }
    cout << a[0];
    for (int i = 1;
    i < s; i++) {
        cout << "," << a[i];
    }
    return 0;
}

