int s = 0, z = 2;

void number (int x, int y) {
    int i;
    if (x == 1) {
        s = s + 1;
    }
    for (i = y; i <= x; i++) {
        if (x % i == 0) {
            number (x / i, i);
        }
    }
}

int main () {
    int n, a, i;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a;
        number (a, z);
        cout << s << endl;
        s = 0;
    }
}

