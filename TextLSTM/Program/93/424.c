int main () {
    int a, b, c, x;
    cin >> x;
    if (x % 3 == 0)
        a = 3;
    else
        a = 0;
    if (x % 5 == 0)
        b = 5;
    else
        b = 0;
    if (x % 7 == 0)
        c = 7;
    else
        c = 0;
    if (a + b + c == 15)
        cout << "3 5 7";
    if (a + b + c == 0)
        cout << "n";
    if (a + b + c == 8)
        cout << "3 5";
    if (a + b + c == 10)
        cout << "3 7";
    if (a + b + c == 12)
        cout << "5 7";
    if (a + b + c == 3)
        cout << "3";
    if (a + b + c == 5)
        cout << "5";
    if (a + b + c == 7)
        cout << "7";
    return 0;
}

