int main () {
    int n, i = 0, a [20001], used [200];
    for (i = 0; i < 200; i++)
        used[i] = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << a[0];
    used[a[0]] = 1;
    for (i = 1; i < n; i++) {
        if (used[a[i]])
            continue;
        cout << " " << a[i];
        used[a[i]] = 1;
    }
    return 0;
}

