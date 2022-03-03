int main () {
    int n;
    cin >> n;
    int x [n + 1], y [n + 1], z [n + 1];
    float dst [n * n];
    int sma [n * n], lar [n * n];
    int count = 0;
    float t;
    for (int i = 1;
    i <= n; ++i) {
        cin >> x[i] >> y[i] >> z[i];
    }
    for (int e = 1;
    e <= n; e++)
        for (int e1 = e + 1;
        e1 <= n; ++e1) {
            ++count;
            sma[count] = e;
            lar[count] = e1;
            dst[count] = sqrt ((x[e] - x[e1]) * (x[e] - x[e1]) + (y[e] - y[e1]) * (y[e] - y[e1]) + (z[e] - z[e1]) * (z[e] - z[e1]));
        }
    for (int e = 1;
    e <= count - 1; ++e)
        for (int i = 1;
        i <= count - e; ++i) {
            if (dst[i] < dst[i + 1]) {
                t = dst[i];
                dst[i] = dst[i + 1];
                dst[i + 1] = t;
                t = sma[i];
                sma[i] = sma[i + 1];
                sma[i + 1] = (int) t;
                t = lar[i];
                lar[i] = lar[i + 1];
                lar[i + 1] = (int) t;
            }
        }
    for (int e = 1;
    e <= count; ++e)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", x[sma[e]], y[sma[e]], z[sma[e]], x[lar[e]], y[lar[e]], z[lar[e]], dst[e]);
    return 0;
}

