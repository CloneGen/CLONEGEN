void jiaogu (int x) {
    if (x == 1) {
        cout << "End" << endl;
        return;
    }
    else {
        if (x % 2 == 1) {
            cout << x << "*3+1=" << x * 3 + 1 << endl;
            return jiaogu (x * 3 + 1);
        }
        else {
            cout << x << "/2=" << x / 2 << endl;
            return jiaogu (x / 2);
        }
    }
}

int main () {
    int n;
    cin >> n;
    jiaogu (n);
    return 0;
}

