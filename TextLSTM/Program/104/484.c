int f (int x, int y);

int main () {
    int x, y;
    cin >> x >> y;
    cout << f (x, y) << endl;
    return 0;
}

int f (int x, int y) {
    while (x != y) {
        if (x > y)
            x = x / 2;
        else
            y = y / 2;
        return f (x, y);
    }
    return x;
}

