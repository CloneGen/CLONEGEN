int main () {
    int n, a, b, c;
    char d;
    a = 3;
    b = 5;
    c = 7;
    d = ' ';
    cin >> n;
    if (n % a == 0 && n % b == 0 && n % c == 0)
        cout << a << d << b << d << c << endl;
    if (n % a == 0 && n % b == 0 && n % c != 0)
        cout << a << d << b << endl;
    if (n % a == 0 && n % b != 0 && n % c == 0)
        cout << a << d << c << endl;
    if (n % a != 0 && n % b == 0 && n % c == 0)
        cout << b << d << c << endl;
    if (n % a != 0 && n % b != 0 && n % c == 0)
        cout << c << endl;
    if (n % a != 0 && n % b == 0 && n % c != 0)
        cout << b << endl;
    if (n % a == 0 && n % b != 0 && n % c != 0)
        cout << a << endl;
    if (n % a != 0 && n % b != 0 && n % c != 0)
        cout << "n" << endl;
    return 0;
}

