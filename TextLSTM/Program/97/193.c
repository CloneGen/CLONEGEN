int main () {
    int a;
    cin >> a;
    cout << a / 100 << endl;
    a -= a / 100 * 100;
    cout << a / 50 << endl;
    a -= a / 50 * 50;
    cout << a / 20 << endl;
    a -= a / 20 * 20;
    cout << a / 10 << endl;
    a -= a / 10 * 10;
    cout << a / 5 << endl;
    a -= a / 5 * 5;
    cout << a << endl;
    return 0;
}

