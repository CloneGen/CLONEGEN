int f (int x) {
    int j;
    for (j = 2; j <= sqrt ((double) x); j++) {
        if (x % j == 0)
            return false;
    }
    return true;
}

int main () {
    int m, x, y;
    cin >> m;
    for (x = 3; x <= m / 2; x += 2) {
        y = m - x;
        if ((f (x) == true) && (f (y) == true))
            cout << x << " " << y << endl;
    }
    return 0;
}

