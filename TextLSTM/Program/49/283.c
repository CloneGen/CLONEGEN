int main () {
    char a [500];
    cin >> a;
    int k = strlen (a);
    int b [100] = {0};
    int c [500] = {0};
    int n1 = 0;
    int n2 = 0;
    for (int l = 2;
    l <= k; l = l + 2) {
        for (int i = 0;
        i < k - l + 1; i++) {
            int time = 1;
            for (int j = 0;
            j <= (l - 2) / 2; j++) {
                if (a[i + j] != a[i + l - 1 - j]) {
                    time = 0;
                    break;
                }
            }
            if (time == 1) {
                b[n1] = i;
                n1++;
                c[n2] = l;
                n2++;
            }
        }
    }
    for (int i = 0;
    i < n1; i++) {
        for (int j = 0;
        j < c[i]; j++) {
            cout << a[b[i] + j];
        }
        cout << endl;
    }
    return 0;
}

