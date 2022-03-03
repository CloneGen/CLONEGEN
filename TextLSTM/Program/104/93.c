int main () {
    int x, y, memo;
    cin >> x >> y;
    memo = y;
    do {
        do {
            if (x == y) {
                cout << x;
                return 0;
            }
            y = y >> 1;
        }
        while (y);
        x = x >> 1;
        y = memo;
    }
    while (x);
}

