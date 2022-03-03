int main () {
    int sum = 0;
    char c;
    int i = 0, j, p;
    int a [m];
    while (cin >> a[i]) {
        sum++;
        c = cin.get ();
        if (c == ',')
            i++;
        else
            break;
    }
    int b [sum];
    for (i = 0; i <= sum - 1; i++) {
        cin >> b[i];
        cin.get ();
    }
    int d [m];
    for (i = 0; i < m; i++)
        d[i] = 0;
    for (i = 0; i <= sum - 1; i++) {
        for (j = 0; j < m; j++) {
            if (j >= a[i] && j < b[i])
                d[j]++;
        }
    }
    int dmax = -9999;
    for (i = 0; i < m; i++) {
        if (dmax < d[i])
            dmax = d[i];
    }
    cout << sum << " " << dmax << endl;
}

