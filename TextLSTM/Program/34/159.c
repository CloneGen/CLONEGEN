void guess (int);

int main () {
    int n = 0;
    cin >> n;
    guess (n);
    return 0;
}

void guess (int n) {
    if (n == 1) {
        cout << "End" << endl;
    }
    else if (n % 2 == 1) {
        cout << n << "*3+1=" << 3 * n + 1 << endl;
        guess (3 * n + 1);
    }
    else if (n % 2 == 0) {
        cout << n << "/2=" << n / 2 << endl;
        guess (n / 2);
    }
}

