int main () {
    int a [4];
    int i, n;
    cin >> n;
    for (i = 0; i <= 3; i++) {
        a[i] = 0;
    }
    if (n % 3 == 0) {
        a[1] = 3;
        a[0]++;
    }
    if (n % 5 == 0) {
        a[2] = 5;
        a[0]++;
    }
    if (n % 7 == 0) {
        a[3] = 7;
        a[0]++;
    }
    if (a[0] != 0) {
        for (i = 1; i <= 3; i++) {
            if (a[i] != 0) {
                a[0]--;
                if (a[0] != 0) {
                    cout << a[i] << ' ';
                }
                else
                    cout << a[i];
            }
        }
    }
    else
        cout << 'n';
}

