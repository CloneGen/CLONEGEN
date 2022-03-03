int main () {
    int a [16] = {0}, n, i = 1;
    for (; a[i] != -1;) {
        n = 0;
        for (i = 0;; i++) {
            cin >> a[i];
            for (int j = 0;
            j < i; j++) {
                if (a[j] * 2 == a[i] || a[j] == a[i] * 2) {
                    n++;
                }
            }
            if (a[i] == 0 || a[i] == -1) {
                break;
            }
        }
        if (a[i] != -1) {
            cout << n << endl;
        }
    }
}

