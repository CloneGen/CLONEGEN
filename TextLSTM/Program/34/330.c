int num (int a) {
    if (a % 2 == 0) {
        cout << a << "/2=" << a / 2 << endl;
        return (a / 2);
    }
    else {
        cout << a << "*3" << "+1=" << a * 3 + 1 << endl;
        return (a * 3 + 1);
    }
}

int main () {
    int a;
    cin >> a;
    while (a != 1) {
        a = num (a);
    }
    cout << "End" << endl;
    return 0;
}

