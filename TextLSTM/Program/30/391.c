int main () {
    int n, i, sum = 0;
    cin >> n;
    int a [n + 1];
    for (i = 1; i < n + 1; i++) {
        if ((i % 7 == 0) || (i % 10 == 7) || i / 10 == 7)
            a[i] = 0;
        else
            a[i] = i * i;
    }
    for (i = 1; i < n + 1; i++)
        sum = sum + a[i];
    cout << sum << endl;
    return 0;
}

