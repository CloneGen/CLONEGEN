int main () {
    int num, a, b, c, d;
    cin >> num;
    a = num / 1000;
    b = (num - a * 1000) / 100;
    c = (num - a * 1000 - b * 100) / 10;
    d = num - a * 1000 - b * 100 - c * 10;
    if (a != 0)
        cout << d << c << b << a << endl;
    else if (a == 0 && b != 0)
        cout << d << c << b << endl;
    else if (a == 0 && b == 0 && c != 0)
        cout << d << c << endl;
    else
        cout << d << endl;
    return 0;
}

