int main () {
    int i, k, j, count = 0, a [16];
    while (a[0] != -1) {
        count = 0;
        for (i = 0; i <= 15; i++) {
            cin >> a[i];
            if (a[i] == 0 || a[0] == -1)
                break;
        }
        if (a[0] == -1)
            break;
        for (k = 0; k <= 15; k++) {
            for (j = k + 1; j <= 16; j++) {
                if (a[j] == 0)
                    break;
                if (a[k] == 2 * a[j] || a[j] == 2 * a[k])
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}

