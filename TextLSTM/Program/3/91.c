int main () {
    int n, k, judge = 0;
    cin >> n >> k;
    int a [1000];
    for (int i = 0;
    i < n; i++)
        cin >> a[i];
    for (int i = 0;
    judge == 0 && i < n - 1; i++) {
        for (int j = i + 1;
        j < n; j++) {
            if (a[i] + a[j] == k)
                judge = 1;
        }
    }
    if (judge == 1)
        cout << "yes";
    if (judge == 0)
        cout << "no";
    return 0;
}

