int main () {
    int c [10000] [2], d [10000], e [10000], i = 0, j, t = 0, m, n = -1, most = 0, max = 0, min = 1000, pause;
    char a [10000], b [10000];
    memset (c, 0, sizeof (c));
    memset (e, 0, sizeof (e));
    cin >> a;
    for (i = 0; i < 10000; i++) {
        if (a[i] != ',' && a[i] != '\0')
            d[i] = a[i] - '0';
        if (a[i] == ',') {
            m = i;
            for (j = n + 1; j < m; j++)
                c[t][0] = 10 * c[t][0] + d[j];
            n = m;
            if (min > c[t][0])
                min = c[t][0];
            t++;
        }
        if (a[i] == '\0') {
            m = i;
            for (j = n + 1; j < m; j++)
                c[t][0] = 10 * c[t][0] + d[j];
            n = m;
            if (min > c[t][0])
                min = c[t][0];
            t++;
            break;
        }
    }
    n = -1;
    t = 0;
    cin >> b;
    for (i = 0; i < 10000; i++) {
        if (b[i] != ',' && b[i] != '\0')
            d[i] = b[i] - '0';
        if (b[i] == ',') {
            m = i;
            for (j = n + 1; j < m; j++)
                c[t][1] = 10 * c[t][1] + d[j];
            n = m;
            if (max < c[t][1])
                max = c[t][1];
            t++;
        }
        if (b[i] == '\0') {
            m = i;
            for (j = n + 1; j < m; j++)
                c[t][1] = 10 * c[t][1] + d[j];
            n = m;
            if (max < c[t][1])
                max = c[t][1];
            t++;
            break;
        }
    }
    for (i = min; i < max; i++) {
        for (j = 0; j < t; j++)
            if (c[j][0] <= i && c[j][1] > i)
                e[i]++;
        if (most < e[i])
            most = e[i];
    }
    cout << t << " " << most << endl;
    return 0;
}

