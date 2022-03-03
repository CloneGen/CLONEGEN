void tree (int x, int y) {
    if (x == y)
        cout << x;
    else if (x < y)
        tree (x, y / 2);
    else if (x > y)
        tree (x / 2, y);
}

int main () {
    int x, y;
    cin >> x >> y;
    tree (x, y);
    return 0;
}

