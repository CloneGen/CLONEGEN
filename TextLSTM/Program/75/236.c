int main () {
    int a [1001], b [1001], t [1000], n, i, tmax;
    tmax = INT_MIN;
    i = 1;
    while (1) {
        cin >> a[i];
        i++;
        if (cin.get () == '\n')
            break;
    }
    n = i - 1;
    for (i = 1; i <= n; i++) {
        cin >> b[i];
        cin.get ();
    }
    for (i = 0; i <= 999; i++)
        t[i] = 0;
    for (i = 1; i <= n; i++) {
        for (; a[i] <= b[i] - 1; a[i]++)
            t[a[i]]++;
    }
    for (i = 0; i <= 999; i++) {
        if (t[i] > tmax)
            tmax = t[i];
    }
    cout << n << " " << tmax << endl;
    return 0;
}

