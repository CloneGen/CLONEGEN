int counter = 1;

void abc (int a, int b) {
    int i;
    for (i = b; i <= a; i++) {
        if (a % i == 0 && (a / i) >= i) {
            counter++;
            abc (a / i, i);
        }
    }
}

int main () {
    int t, x;
    cin >> t;
    for (x = 1; x <= t; x++) {
        counter = 1;
        int m;
        cin >> m;
        abc (m, 2);
        cout << counter << endl;
    }
    return 0;
}

