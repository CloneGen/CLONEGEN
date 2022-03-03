int main () {
    int Er (int, int);
    int x, y;
    cin >> x >> y;
    cout << Er (x, y);
    return 0;
}

int Er (int x, int y) {
    if (x == y)
        return x;
    else if (x < y)
        return Er (y, x);
    else if (x / 2 < y)
        return Er (x / 2, y / 2);
    else
        return Er (x / 2, y);
}

