int main () {
    char a [10000], b [10000];
    int x [5000], y [5000], k1 [5000], k2 [5000], p = 1, q = 1, k, la, lb;
    cin >> a >> b;
    la = strlen (a);
    lb = strlen (b);
    for (int i = 0;
    i < la; i++)
        if (a[i] == ',')
            k1[p++] = i;
    for (int i = 0;
    i < lb; i++)
        if (b[i] == ',')
            k2[q++] = i;
    k1[0] = -1;
    k2[0] = -1;
    k1[p] = la;
    k2[q] = lb;
    for (int i = 0;
    i < p; i++) {
        k = 1;
        for (int j = k1[i + 1] - 1;
        j >= k1[i] + 1; j--) {
            x[i] += (a[j] - '0') * k;
            k *= 10;
        }
        k = 1;
        for (int j = k2[i + 1] - 1;
        j >= k2[i] + 1; j--) {
            y[i] += (b[j] - '0') * k;
            k *= 10;
        }
    }
    for (int i = 0;
    i < p; i++)
        for (int j = 1;
        j < p - i; j++)
            if (x[j - 1] > x[j]) {
                k = x[j];
                x[j] = x[j - 1];
                x[j - 1] = k;
                k = y[j];
                y[j] = y[j - 1];
                y[j - 1] = k;
            }
    int max = 0, t [5000], sum;
    k = 1;
    t[0] = 0;
    for (int i = 0;
    i < p - 1; i++)
        if (x[i + 1] != x[i])
            t[k++] = i + 1;
    t[k] = p;
    max = t[1];
    for (int i = 1;
    i < k; i++) {
        sum = t[i + 1] - t[i];
        for (int j = 0;
        j < t[i]; j++)
            if (y[j] > x[t[i]])
                sum += 1;
        if (sum > max)
            max = sum;
    }
    cout << p << ' ' << max;
    return 0;
}

