int main () {
    int a [17], i, n;
    while (1) {
        n = 0;
        cin >> a[1];
        if (a[1] == -1)
            break;
        for (i = 2;; i++) {
            cin >> a[i];
            if (a[i] == 0)
                break;
        }
        for (int j = 1;
        j <= i; j++)
            for (int k = j + 1;
            k <= i; k++)
                if (a[j] == 2 * a[k] || a[k] == 2 * a[j])
                    n++;
        cout << n << endl;
    }
    return 0;
}

