int main () {
    int a [16], i, j, k, count;
    while (1) {
        for (i = 0;; i++) {
            cin >> a[i];
            if (a[i] == 0)
                break;
            if (a[0] == -1)
                break;
        }
        if (a[0] == -1)
            break;
        count = 0;
        for (k = 0; k < i; k++)
            for (j = 0; j < i; j++)
                if ((a[k] == 2 * a[j]) || (a[j] == a[k] * 2))
                    count++;
        cout << count / 2 << endl;
    }
    return 0;
}

