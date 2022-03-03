int main () {
    int i, j, f = 0;
    while (f == 0) {
        int a [16], count = 0;
        for (i = 0;; i++) {
            cin >> a[i];
            if (a[i] == 0) {
                cout << count << endl;
                break;
            }
            else if (a[i] == -1) {
                f = 1;
                break;
            }
            else {
                for (j = 0; j < i; j++) {
                    if ((a[i] == a[j] * 2) || (a[j] == a[i] * 2))
                        count++;
                }
            }
        }
    }
    return 0;
}

