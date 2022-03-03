int ans (int a, int i) {
    int sum = 0;
    for (int j = i;
    j <= sqrt (a); j++) {
        if (a % j != 0)
            continue;
        sum++;
        if (a >= j * j)
            sum += ans (a / j, j);
    }
    return sum;
}

int main () {
    int n, a;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> a;
        cout << ans (a, 2) + 1 << endl;
    }
    return 0;
}

