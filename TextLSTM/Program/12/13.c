int main () {
    int i, j, a [20], sum = 0;
    while (1) {
        cin >> a[0];
        if (a[0] == -1)
            break;
        for (i = 1; a[i - 1] != 0; i++) {
            cin >> a[i];
        }
        for (i = 0; a[i] != 0; i++) {
            for (j = 0; a[j] != 0; j++) {
                if (a[i] == 2 * a[j])
                    sum++;
            }
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}

