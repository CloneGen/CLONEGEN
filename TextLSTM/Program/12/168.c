int main () {
    int a [16], i, j, n, count;
    while (1) {
        count = 0;
        i = 0;
        while (1) {
            cin >> a[i++];
            if (a[i - 1] == 0 || a[0] == -1)
                break;
        }
        n = i - 1;
        if (a[0] == -1)
            break;
        for (i = 0; i < n - 1; i++)
            for (j = i + 1; j < n; j++) {
                if (a[i] * 2 == a[j] || a[j] * 2 == a[i])
                    count++;
            }
        cout << count << endl;
    }
    return 0;
}

