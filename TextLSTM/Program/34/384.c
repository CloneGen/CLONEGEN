void f (int a) {
    if (a == 1)
        cout << "End" << endl;
    else if (a % 2) {
        cout << a << "*3+1=" << 3 * a + 1 << endl;
        f (3 * a + 1);
    }
    else {
        cout << a << "/2=" << a / 2 << endl;
        f (a / 2);
    }
}

int main () {
    int n;
    cin >> n;
    f (n);
    return 0;
}

