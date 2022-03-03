int main () {
    int n, m, t, d, k, all = 0;
    cin >> n;
    for (m = 1; m <= n; m++) {
        if (m % 7 == 0)
            continue;
        t = 0;
        d = m;
        do {
            k = d % 10;
            if (k == 7) {
                t++;
                break;
            }
            d = d / 10;
        }
        while (d > 1);
        if (t == 0)
            all += m * m;
    }
    cout << all << endl;
    return 0;
}

