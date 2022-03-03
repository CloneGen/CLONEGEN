int find (int x, int y) {
    if (x == y)
        return x;
    else if (x > y) {
        while (x > y)
            x = x / 2;
        return find (x, y);
    }
    else {
        while (y > x)
            y = y / 2;
        return find (x, y);
    }
}

int main () {
    int m, n;
    cin >> m >> n;
    cout << find (m, n);
    return 0;
}

