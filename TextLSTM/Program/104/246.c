int f (int x, int y) {
    while (x != y) {
        if (x > y)
            x = x / 2;
        else
            y = y / 2;
    }
    return x;
}

int main () {
    int a, b;
    cin >> a >> b;
    cout << f (a, b) << endl;
    return 0;
}

