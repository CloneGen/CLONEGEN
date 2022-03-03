int main () {
    int n, i = 0, sum = 0;
    cin >> n;
    while (i <= n - 1) {
        i++;
        if (i % 7 == 0)
            continue;
        if (i / 10 == 7)
            continue;
        if ((i - (i / 10) * 10) == 7)
            continue;
        sum = sum + i * i;
    }
    cout << sum << endl;
    return 0;
}

