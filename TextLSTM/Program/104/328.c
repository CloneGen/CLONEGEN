int main () {
    int x, y, t;
    cin >> x >> y;
    while (x != y) {
        if (x < y) {
            t = x;
            x = y;
            y = t;
        }
        x /= 2;
    }
    cout << x;
    return 0;
}

