int main () {
    int n;
    cin >> n;
    int a [20000];
    int i;
    for (i = 0; i < n; i++)
        cin >> a[i];
    int j;
    int k;
    for (i = 0; i < n; i++) {
        j = i + 1;
        while (j < n)
            if (a[i] == a[j]) {
                n--;
                for (k = j; k < n; k++)
                    a[k] = a[k + 1];
            }
            else
                j++;
    }
    for (i = 0; i < n - 1; i++)
        cout << a[i] << " ";
    cout << a[n - 1];
    return 0;
}

