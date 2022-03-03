int main () {
    int n, k, i, j, k2 = 0;
    int a [1000] = {0};
    cin >> n >> k;
    for (i = 0; i < n; i++)
        cin >> a[i];
    i = 0;
    j = 0;
    while (k2 != k && i < n) {
        j = i + 1;
        while (k2 != k && j < n) {
            k2 = a[i] + a[j];
            j++;
        }
        i++;
    }
    if (k2 == k)
        cout << "yes";
    else
        cout << "no";
    return 0;
}

