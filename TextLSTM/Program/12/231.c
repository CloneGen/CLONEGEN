int main () {
    int a [16], i = 0, j = 0, n = 0, Two;
    for (i = 0; i < 16; i++) {
        a[i] = 0;
    }
    while (1 > 0) {
        n = 0;
        Two = 0;
        for (i = 0; i < 16; i++) {
            cin >> a[i];
            if ((a[i] == 0) || (a[0] == -1))
                break;
            else
                n++;
        }
        if (a[0] == -1)
            break;
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if ((a[i] == (2 * a[j])) || (a[j] == (2 * a[i]))) {
                    Two++;
                }
            }
        }
        cout << Two << endl;
    }
    return 0;
}

