int main () {
    int n, i, sum = 0;
    cin >> n;
    while (n < 1) {
        cout << " Invalid n, input it again ";
        cin >> n;
    }
    for (i = 1; i <= n; i++) {
        if ((i % 7 == 0) || ((i - 7) % 10 == 0) || ((i < 80) && (i >= 70)))
            continue;
        sum = sum + i * i;
    }
    cout << sum;
    return 0;
}

