int cmp (int x, int y) {
    if (x == y)
        return x;
    else {
        if (x > y) {
            x = x / 2;
        }
        if (x < y) {
            y = y / 2;
        }
        cmp (x, y);
    }
}

int main () {
    int x, y;
    cin >> x >> y;
    cout << cmp (x, y);
    return 0;
}

