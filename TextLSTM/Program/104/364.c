int f (int x, int y) {
    int p;
    if (x == y)
        return x;
    else {
        if (x > y) {
            p = x;
            x = y;
            y = p;
        }
        if (y % 2 == 0)
            y = y / 2;
        else
            y = (y - 1) / 2;
        return f (x, y);
    }
}

int main () {
    int x, y;
    cin >> x >> y;
    cout << f (x, y) << endl;
    return 0;
}

