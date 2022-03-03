int main () {
    int m, x, y, i, j, l, k;
    cin >> m;
    for (x = 3; x <= m / 2; x += 2) {
        for (i = 2; i < x; i++)
            if ((x % i) == 0)
                break;
        if (i == x) {
            y = m - x;
            for (j = 2; j < y; j++)
                if ((y % j) == 0)
                    break;
            if (j == y)
                cout << x << ' ' << y << endl;
        }
    }
    return 0;
}

