int main () {
    double n, i, x, y, a, b;
    cin >> n >> a >> b;
    x = b / a;
    for (i = 1; i <= n - 1; i++) {
        cin >> a >> b;
        y = b / a;
        if (x - y > 0.05)
            cout << "worse" << endl;
        else if (abs (x - y) <= 0.05)
            cout << "same" << endl;
        else if (y - x > 0.05)
            cout << "better" << endl;
    }
    return 0;
}

