int i, j, x, y;

int f (int n, int x) {
    if (n == 1)
        return x;
    else
        return (f (n - 1, x) - f (n - 1, x) % 2) / 2;
}

int main () {
    cin >> x >> y;
    for (i = 1; i < 15; i++)
        for (j = 1; j < 15; j++)
            if (f (i, x) == f (j, y)) {
                cout << f (i, x);
                i = 15;
                j = 15;
            }
    return 0;
}

