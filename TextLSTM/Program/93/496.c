int main () {
    int x, a, b, c;
    cin >> x;
    a = (x % 3 == 0) ? 1 : 0;
    b = (x % 5 == 0) ? 1 : 0;
    c = (x % 7 == 0) ? 1 : 0;
    if (a + b + c == 3)
        cout << 3 << " " << 5 << " " << 7 << endl;
    else if (a + b + c == 0)
        cout << "n" << endl;
    else if (a + b == 0)
        cout << 7 << endl;
    else if (a + c == 0)
        cout << 5 << endl;
    else if (b + c == 0)
        cout << 3 << endl;
    else if (a + b == 2)
        cout << 3 << " " << 5 << endl;
    else if (a + c == 2)
        cout << 3 << " " << 7 << endl;
    else
        cout << 5 << " " << 7 << endl;
    return 0;
}

