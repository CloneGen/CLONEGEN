int fib (int i) {
    if (i == 1 || i == 2)
        return 1;
    else
        return (fib (i - 1)) + fib ((i - 2));
}

int main () {
    int n, i, a [20];
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
        cout << fib (a[i]) << endl;
    return 0;
}

