int main () {
    int x, y, a, b, i, j;
    cin >> x >> y;
    for (i = 1; x / i > 0; i = i * 2)
        a = x % i;
    for (j = 1; y / j > 0; j = j * 2)
        b = y % j;
    i = i / 2;
    j = j / 2;
    if (i > j)
        x = x * j / i;
    else
        y = y * i / j;
    while (x != y) {
        x = x / 2;
        y = y / 2;
    }
    cout << x;
}

