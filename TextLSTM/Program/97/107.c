int main () {
    int a, b;
    cin >> a;
    if (a >= 100) {
        b = (int) (a / 100);
        cout << b << endl;
        a = a - b * 100;
    }
    else
        cout << 0 << endl;
    if (a >= 50) {
        cout << 1 << endl;
        a = a - 50;
    }
    else
        cout << 0 << endl;
    if (a >= 40) {
        cout << 2 << endl;
        a = a - 40;
    }
    else if (a >= 20 && a < 40) {
        cout << 1 << endl;
        a = a - 20;
    }
    else
        cout << 0 << endl;
    if (a >= 10) {
        cout << 1 << endl;
        a = a - 10;
    }
    else
        cout << 0 << endl;
    if (a >= 5) {
        cout << 1 << endl;
        a = a - 5;
    }
    else
        cout << 0 << endl;
    cout << a << endl;
    return 0;
}

