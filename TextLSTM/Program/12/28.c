int main () {
    int a [20];
    int i, cnt;
    i = 0;
    cnt = 0;
    cin >> a[i];
    while (a[i] != -1) {
        while (a[i] != 0) {
            i++;
            cin >> a[i];
        }
        for (int j = 0;
        j <= i; j++) {
            for (int k = 0;
            k <= i; k++) {
                if (a[k] == 2 * a[j])
                    cnt++;
            }
        }
        cout << cnt - 1 << endl;
        i = 0;
        cnt = 0;
        cin >> a[i];
    }
    return 0;
}

