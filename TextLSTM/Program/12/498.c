int main () {
    int i, j, k, a [16] = {0}, sum;
    while (cin >> a[0]) {
        if (a[0] == -1)
            break;
        i = 0;
        sum = 0;
        do {
            i++;
            cin >> a[i];
        }
        while (a[i] != 0);
        for (j = 0; j < i; j++) {
            for (k = 0; k < i; k++) {
                if (k != j && a[k] == 2 * a[j])
                    sum += 1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}

