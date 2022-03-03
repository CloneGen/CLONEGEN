int main () {
    int n, i, m, sum;
    sum = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        m = i / 10;
        if (i % 7 == 0)
            continue;
        if ((i - 7) % 10 == 0)
            continue;
        if (m == 7)
            continue;
        sum = sum + i * i;
    }
    cout << sum << endl;
    return 0;
}

