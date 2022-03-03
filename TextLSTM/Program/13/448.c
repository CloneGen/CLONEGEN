int n, a [maxn], times [200];

int main () {
    cin >> n;
    for (int i = 0;
    i < n; ++i)
        cin >> a[i];
    int tot = 0;
    for (int i = 0;
    i < n; ++i)
        if (!times[a[i]]) {
            tot++;
            times[a[i]]++;
            if (tot > 1)
                cout << " ";
            cout << a[i];
        }
    return 0;
}

