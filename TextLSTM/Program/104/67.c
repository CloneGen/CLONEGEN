int find (int x, int y) {
    if (x == y)
        return x;
    while ((x /= 2) > y) {
    }
    return find (y, x);
}

int main () {
    int x, y;
    cin >> x >> y;
    cout << (x > y ? find (x, y) : find (y, x)) << endl;
    return 0;
}

