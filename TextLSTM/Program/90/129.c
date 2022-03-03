int apple (int x, int y) {
    if (x == 0)
        return 1;
    if (y == 1)
        return 1;
    if (x < y)
        return apple (x, x);
    else if (x >= y)
        return apple (x - y, y) + apple (x, y - 1);
}

int main () {
    int i;
    cin >> i;
    for (i;
    i > 0; i--) {
        int m, n;
        cin >> m >> n;
        cout << apple (m, n);
        if (i != 1)
            cout << endl;
    }
    return 0;
}

