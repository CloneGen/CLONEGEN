int main () {
    int i, j, k, a [16] = {0}, count;
    do {
        count = 0;
        cin >> a[0];
        if (a[0] == -1)
            break;
        for (i = 1;; i++) {
            cin >> a[i];
            if (a[i] == 0)
                break;
        }
        for (j = 0; j < i; j++)
            for (k = 0; k < j; k++)
                if (a[k] == 2 * a[j] || 2 * a[k] == a[j])
                    count++;
        cout << count << endl;
    }
    while (1);
    return 0;
}

