int main () {
    int a [15], sum = 0, b, n = 0;
    while (cin >> b) {
        if (b == -1)
            break;
        else if (b == 0) {
            for (int i = 0;
            i <= n - 1; i++) {
                for (int j = i + 1;
                j <= n - 1; j++) {
                    if (a[i] == 2 * a[j] || a[j] == 2 * a[i]) {
                        sum++;
                    }
                }
            }
            cout << sum << endl;
            sum = 0;
            n = 0;
        }
        else {
            a[n] = b;
            n++;
        }
    }
    return 0;
}

