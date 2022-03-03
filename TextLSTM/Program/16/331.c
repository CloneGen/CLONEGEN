int main () {
    int a, b, c, d;
    int num;
    cin >> num;
    if (num == 10000) {
        cout << "00001";
    }
    else if (num < 10000 && num > 999) {
        d = num / 1000;
        c = num / 100 - d * 10;
        b = num / 10 - d * 100 - c * 10;
        a = num % 10;
        cout << a << b << c << d;
    }
    else if (num < 1000 && num > 99) {
        c = num / 100;
        b = num / 10 - c * 10;
        a = num % 10;
        cout << a << b << c;
    }
    else if (num < 100 && num > 9) {
        b = num / 10;
        a = num - b * 10;
        cout << a << b;
    }
    else {
        cout << num;
    }
    return 0;
}

