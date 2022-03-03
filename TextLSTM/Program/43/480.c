int main () {
    int m, a, b, i, x, y;
    cin >> m;
    for (a = 3; a <= (m / 2); a++) {
        b = m - a;
        int x = y = 0;
        for (int i = 2;
        i <= floor (sqrt (a)); i++) {
            if (a % i == 0) {
                x++;
            }
        }
        for (int i = 2;
        i <= floor (sqrt (b)); i++) {
            if (b % i == 0) {
                y++;
            }
        }
        if (x == 0 && y == 0) {
            cout << a << " " << b << endl;
        }
    }
    return 0;
}

