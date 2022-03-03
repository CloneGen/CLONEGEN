int main () {
    int n, x;
    x = 0;
    cin >> n;
    if (n % 3 == 0)
        x = x + 3;
    if (n % 5 == 0)
        x = x + 5;
    if (n % 7 == 0)
        x = x + 7;
    if (x == 0)
        cout << "n" << endl;
    if (x == 3)
        cout << "3" << endl;
    if (x == 5)
        cout << "5" << endl;
    if (x == 7)
        cout << "7" << endl;
    if (x == 8)
        cout << "3 5" << endl;
    if (x == 10)
        cout << "3 7" << endl;
    if (x == 12)
        cout << "5 7" << endl;
    if (x == 15)
        cout << "3 5 7" << endl;
    return 0;
}

