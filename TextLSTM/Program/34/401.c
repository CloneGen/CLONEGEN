void jiaogu (int n) {
    if (n == 1) {
        cout << "End" << endl;
        return;
    }
    else {
        if (n % 2 == 0) {
            cout << n << "/2=" << n / 2 << endl;
            n = n / 2;
        }
        else {
            cout << n << "*3+1=" << n * 3 + 1 << endl;
            n = n * 3 + 1;
        }
        jiaogu (n);
    }
}

int main () {
    int n;
    cin >> n;
    jiaogu (n);
    return 0;
}

