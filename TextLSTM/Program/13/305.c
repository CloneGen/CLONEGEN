int main () {
    int n;
    cin >> n;
    int a [20001];
    int i;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    int j = 1;
    for (i = 2; i <= n; i++) {
        for (j = 1; j < i; j++) {
            if (a[i] == a[j]) {
                int u = i;
                if (a[i] == a[i + 1])
                    j--;
                while (i < n) {
                    a[i] = a[i + 1];
                    i++;
                }
                i = u;
                n--;
                i--;
            }
        }
    }
    for (i = 1; i < n; i++)
        cout << a[i] << " ";
    cout << a[n] << endl;
    return 0;
}

