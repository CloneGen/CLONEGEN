int main () {
    int n, pos, i;
    cin >> n;
    int fib [21] = {1, 1};
    while (n) {
        cin >> pos;
        for (i = 2; i < pos; i++)
            fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i - 1] << endl;
        n--;
    }
    return 0;
}

