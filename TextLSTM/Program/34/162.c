int jiaogu (int a) {
    if (a % 2 == 0 && a != 0) {
        cout << a << "/" << "2" << "=" << a / 2 << endl;
        return jiaogu (a / 2);
    }
    else if (a % 2 == 1 && a != 1) {
        cout << a << "*" << "3" << "+" << "1" << "=" << (a * 3) + 1 << endl;
        return jiaogu (a * 3 + 1);
    }
    else if (a == 1) {
        cout << "End" << endl;
        return 0;
    }
}

int main () {
    int a;
    cin >> a;
    jiaogu (a);
    return 0;
}

