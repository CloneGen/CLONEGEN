void f (int);

int main () {
    int n;
    cin >> n;
    if (n == 1)
        cout << "End" << endl;
    else
        f (n);
    return 0;
}

void f (int n) {
    int p = n;
    if (p == 1) {
        cout << "End" << endl;
        return;
    }
    else if (p % 2 == 0) {
        cout << p << "/2=" << p / 2 << endl;
        f (p / 2);
    }
    else {
        cout << p << "*3+1=" << p * 3 + 1 << endl;
        f (3 * p + 1);
    }
}

