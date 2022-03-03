int main () {
    int N, cnt = 0;
    int a [500 + 10];
    cin >> N;
    for (int i = 0;
    i < N; ++i) {
        cin >> a[i];
        if (a[i] % 2)
            a[cnt++] = a[i];
    }
    sort (a, a + cnt);
    for (int i = 0;
    i < cnt; ++i) {
        if (i)
            cout << ",";
        cout << a[i];
    }
    return 0;
}

