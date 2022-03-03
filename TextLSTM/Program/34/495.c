int main () {
    int a, b, c;
    cin >> a;
    c = 0;
    while (a != 1) {
        b = a % 2;
        if (b) {
            c = a * 3 + 1;
            cout << a << "*" << 3 << "+" << 1 << "=" << c << endl;
            a = c;
        }
        else {
            c = a / 2;
            cout << a << "/" << 2 << "=" << c << endl;
            a = c;
        }
    }
    cout << "End" << endl;
    return 0;
}

