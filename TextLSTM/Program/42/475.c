int main () {
    int n;
    cin >> n;
    int a [n], sum = n, k;
    for (int i = 0;
    i < n; i++)
        cin >> a[i];
    cin >> k;
    for (int j = 0;
    j < n; j++)
        if (a[j] == k) {
            for (int l = j;
            l < n; l++)
                a[l] = a[l + 1];
            sum--;
            j--;
        }
    cout << a[0];
    for (int m = 1;
    m < sum; m++)
        cout << " " << a[m];
    return 0;
}

