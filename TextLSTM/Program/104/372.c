int main () {
    int x, y;
    cin >> x >> y;
    void commoninteger (int x, int y);
    commoninteger (x, y);
    return 0;
}

void commoninteger (int x, int y) {
    if (x == y)
        cout << x;
    else {
        if (x > y)
            commoninteger (x / 2, y);
        else
            commoninteger (x, y / 2);
    }
}

