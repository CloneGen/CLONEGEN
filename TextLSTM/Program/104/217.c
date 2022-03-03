int main () {
    int x, y, i;
    cin >> x >> y;
    for (i = 0;; i++) {
        if (x == y) {
            cout << x << endl;
            break;
        }
        if (x > y) {
            x = x / 2;
            continue;
        }
        if (x < y)
            y = y / 2;
    }
    return 0;
}

