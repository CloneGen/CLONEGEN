void jiaogu (int n);

int main () {
    int n;
    cin >> n;
    jiaogu (n);
    return 0;
}

void jiaogu (int n) {
    if (n == 1)
        cout << "End" << endl;
    else {
        if (n % 2 == 1) {
            cout << n << "*" << 3 << "+" << 1 << "=" << n * 3 + 1 << endl;
            jiaogu (n * 3 + 1);
        }
        else {
            cout << n << "/" << 2 << "=" << n / 2 << endl;
            jiaogu (n / 2);
        }
    }
}

