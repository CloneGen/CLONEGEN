int main () {
    int t;
    int a [16], i, j, k, count;
    while (cin >> t) {
        count = 0;
        if (t < 0)
            return 0;
        a[0] = t;
        for (i = 1; i < 16; i++) {
            cin >> a[i];
            if (a[i] == 0)
                break;
        }
        for (j = 0; j < i; j++) {
            for (k = 0; k < i; k++) {
                if (a[k] == 2 * a[j])
                    count++;
            }
        }
        cout << count << endl;
    }
}

