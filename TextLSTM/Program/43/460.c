int main () {
    int m;
    cin >> m;
    int e;
    int b = 0;
    int c = 0;
    for (int k = 3;
    k <= m / 2; k = k + 2) {
        e = 0;
        for (int i = 2;
        i <= sqrt (k); i = i + 1) {
            b = k % i;
            if (b == 0)
                e = 1;
        }
        if (e == 0) {
            c = m - k;
            for (int i = 2;
            i <= sqrt (c); i = i + 1) {
                b = c % i;
                if (b == 0)
                    e = 1;
            }
            if (e == 0)
                cout << k << " " << c << endl;
        }
    }
    return 0;
}

