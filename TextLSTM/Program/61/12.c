int main () {
    int n, a [21], Fibonacci [21], i, k;
    cin >> n;
    for (k = 1; k <= n; k++)
        cin >> a[k];
    Fibonacci[1] = 1;
    Fibonacci[2] = 1;
    for (i = 3; i <= 20; i++)
        Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
    for (k = 1; k <= n; k++)
        cout << Fibonacci[a[k]] << endl;
    return 0;
}

