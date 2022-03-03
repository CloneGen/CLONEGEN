int main () {
    int x = 0, y = 0;
    cin >> x >> y;
    while (x != y) {
        if (x > y)
            x = x / 2;
        else
            y = y / 2;
    }
    cout << x << endl;
    return 0;
}

