int main () {
    int x, y, max, i, check [1001] = {0, 2, 0};
    cin >> x >> y;
    if (x > y)
        max = x;
    else
        max = y;
    while (x != 1) {
        check[x]++;
        x = x / 2;
    }
    while (y != 1) {
        check[y]++;
        y = y / 2;
    }
    for (i = max; i >= 1; i--)
        if (check[i] == 2) {
            cout << i;
            return 0;
        }
}

