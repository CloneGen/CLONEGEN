int jiaogu (int a) {
    if (a == 1) {
        cout << "End" << endl;
        return 0;
    }
    else if (a % 2 == 1) {
        cout << a << "*3+1=" << 3 * a + 1 << endl;
        return jiaogu (3 * a + 1);
    }
    else {
        cout << a << "/2=" << a / 2 << endl;
        return (jiaogu (a / 2));
    }
    return 0;
}

int main () {
    int a, b;
    cin >> a;
    b = jiaogu (a);
    return 0;
}

