int n;
int a [61], b, q [61];

int main () {
    int i, j, k, t, sum, c;
    cin >> n;
    for (i = 0; i < n; ++i) {
        t = 60;
        k = 0;
        c = 0;
        sum = 0;
        memset (a, 0, sizeof (a));
        cin >> b;
        for (j = 0; j < b; ++j) {
            cin >> a[j];
            q[j] = a[j];
        }
        if (b == 0)
            cout << 60 << endl;
        else {
            if (a[0] >= 60) {
                cout << 60 << endl;
                continue;
            }
            for (j = 0; j < b; ++j) {
                a[j] += j * 3;
            }
            for (j = 0; j < b; ++j) {
                if (a[j] >= 60) {
                    sum = a[j - 1] - ((j - 1) * 3);
                    t -= a[j - 1];
                    c = 1;
                    break;
                }
            }
            if (c) {
                if (t > 3)
                    sum += t - 3;
            }
            else {
                sum = q[b - 1];
                t -= a[b - 1];
                if (t > 3)
                    sum += t - 3;
            }
            cout << sum << endl;
        }
    }
    return 0;
}

