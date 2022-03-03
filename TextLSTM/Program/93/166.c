int main () {
    int n, x, y, z;
    cin >> n;
    x = n % 3;
    y = n % 5;
    z = n % 7;
    if (x == 0)
        cout << 3;
    if (y == 0) {
        if (x == 0)
            cout << " " << 5;
        else
            cout << 5;
    }
    if (z == 0) {
        if (x == 0 || y == 0)
            cout << " " << 7 << endl;
        else
            cout << 7 << endl;
    }
    if (x != 0 & y != 0 & z != 0)
        cout << "n" << endl;
    return 0;
}

