int main () {
    unsigned int x, y;
    cin >> x >> y;
    while (x != y) {
        if (x > y)
            x /= 2;
        else
            y /= 2;
    }
    cout << x << endl;
    return 0;
}

