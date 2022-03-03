int main () {
    int a [100000] = {0};
    int n, k;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (int i = 0;
    i < n; i++) {
        if (k == a[i]) {
            int count = 0;
            int I = i;
            for (int j = i;
            j < n; j++) {
                if (k == a[j]) {
                    count++;
                }
                else {
                    break;
                }
            }
            while ((I +count) < n) {
                a[I] = a[I +count];
                I++;
            }
            n = n - count;
        }
    }
    for (int i = 0;
    i < n; i++) {
        if (i != n - 1)
            cout << a[i] << " ";
        else
            cout << a[i];
    }
    return 0;
}

