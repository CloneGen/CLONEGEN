int main () {
    int n = 0;
    int a [300], sum = 0, t;
    double ave, dis [300], max = 0.0;
    cin >> n;
    int i = 0, j = 0;
    int p = 0;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    ave = (double) sum / (double) n;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
    for (i = 0; i < n; i++)
        dis[i] = (a[i] - ave) * (a[i] - ave);
    max = dis[0];
    for (i = 0; i < n; i++)
        if (dis[i] >= max) {
            max = dis[i];
            p++;
        }
    if (p == 1) {
        for (i = 0; i < n; i++)
            if (dis[i] == max)
                cout << a[i];
    }
    else if (p > 1) {
        for (i = 0; i < n; i++)
            if (dis[i] == max) {
                j = i;
                cout << a[j];
                break;
            }
        for (i = j + 1; i < n; i++)
            if (dis[i] == max)
                cout << "," << a[i];
    }
    return 0;
}

