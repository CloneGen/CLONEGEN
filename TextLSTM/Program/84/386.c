int main () {
    int k, i, a [100], max1, max2;
    max1 = 0;
    max2 = 0;
    cin >> k;
    for (i = 0; i < k;) {
        cin >> a[i];
        if (a[i] >= max1)
            max1 = a[i];
        i++;
    };
    for (i = 0; i < k;) {
        if (a[i] >= max2 & a[i] <= (max1 - 1))
            max2 = a[i];
        i++;
    };
    cout << max1 << endl;
    cout << max2;
    return 0;
}

