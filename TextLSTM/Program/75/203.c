int main () {
    int a [1000], b [1000], t [1000] = {0}, k = 1, c = 0;
    cin >> a[0];
    while (cin.get () == ',') {
        cin >> a[k];
        ++k;
    }
    cout << k;
    cin >> b[0];
    k = 1;
    while (cin.get () == ',') {
        cin >> b[k];
        ++k;
    }
    for (int i = 0;
    i < k; ++i) {
        for (int j = a[i];
        j < b[i]; ++j)
            ++t[j];
    }
    for (int n = 1;
    n < 1000; ++n) {
        if (t[n] > t[c])
            c = n;
    }
    cout << " " << t[c];
    return 0;
}

