int main () {
    int a, b, c;
    cin >> a >> b >> c;
    if (!((a % 4 == 0 && a % 100 != 0) || (a % 4 == 0 && a % 400 == 0))) {
        if (b == 1)
            cout << c;
        if (b == 2)
            cout << 31 + c;
        if (b == 3)
            cout << 60 + c - 1;
        if (b == 4)
            cout << 91 + c - 1;
        if (b == 5)
            cout << 121 + c - 1;
        if (b == 6)
            cout << 152 + c - 1;
        if (b == 7)
            cout << 182 + c - 1;
        if (b == 8)
            cout << 213 + c - 1;
        if (b == 9)
            cout << 244 + c - 1;
        if (b == 10)
            cout << 274 + c - 1;
        if (b == 11)
            cout << 305 + c - 1;
        if (b == 12)
            cout << 335 + c - 1;
    }
    else {
        if (b == 1)
            cout << c;
        if (b == 2)
            cout << 31 + c;
        if (b == 3)
            cout << 60 + c;
        if (b == 4)
            cout << 91 + c;
        if (b == 5)
            cout << 121 + c;
        if (b == 6)
            cout << 152 + c;
        if (b == 7)
            cout << 182 + c;
        if (b == 8)
            cout << 213 + c;
        if (b == 9)
            cout << 244 + c;
        if (b == 10)
            cout << 274 + c;
        if (b == 11)
            cout << 305 + c;
        if (b == 12)
            cout << 335 + c;
    }
    return 0;
}

