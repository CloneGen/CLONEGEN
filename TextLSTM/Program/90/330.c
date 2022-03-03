int f (int, int);

int main () {
    int sum;
    cin >> sum;
    while (sum--) {
        int m, n;
        cin >> m >> n;
        cout << f (m, n) << endl;
    }
}

int f (int m, int n) {
    if (m < 0)
        return 0;
    if (n == 1)
        return 1;
    return f (m - n, n) + f (m, n - 1);
}

