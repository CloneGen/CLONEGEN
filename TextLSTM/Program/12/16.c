int main () {
    int a [16] = {0};
    int sum = 0;
    do {
        sum = 0;
        cin >> a[0];
        if (a[0] == -1)
            break;
        for (int i = 1;
        i <= 15; ++i) {
            cin >> a[i];
            if (a[i] == 0)
                break;
        }
        for (int m = 0;
        m <= 13; ++m) {
            if (a[m + 1] == 0)
                break;
            for (int n = m + 1;
            n <= 14; ++n) {
                if (a[n] == 0)
                    break;
                if (a[m] == 2 * a[n] || a[n] == 2 * a[m])
                    ++sum;
            }
        }
        cout << sum << endl;
    }
    while (1);
    return 0;
}

