int main () {
    int x, y, m;
    cin >> x >> y;
    while (y != 1) {
        m = x;
        while (m != 1) {
            if (m == y) {
                cout << m;
                return 0;
            }
            m /= 2;
        }
        y /= 2;
    }
    cout << 1;
    return 0;
}

