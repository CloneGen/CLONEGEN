int print (int x) {
    if (x == 1) {
        cout << "End" << endl;
        return 0;
    }
    if (x % 2 == 0)
        cout << x << "/2=" << x / 2 << endl;
    if (x % 2 == 1)
        cout << x << "*3+1=" << x * 3 + 1 << endl;
    return 0;
}

int number (int x) {
    if (x == 1) {
        print (x);
        return 0;
    }
    if (x % 2 == 0) {
        print (x);
        return number (x / 2);
    }
    else {
        print (x);
        return number (x * 3 + 1);
    }
}

int main () {
    int x;
    cin >> x;
    number (x);
    return 0;
}

