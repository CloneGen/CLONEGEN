int cal;

int fac (int a, int x) {
    if (x == 1) {
        cal++;
        return 1;
    }
    for (int i = 2;
    i <= x; i++)
        if (x % i == 0 && i >= a)
            fac (i, x / i);
}

int main () {
    int n, b;
    cin >> n;
    while (n > 0) {
        cal = 0;
        cin >> b;
        fac (1, b);
        cout << cal << endl;
        n--;
    }
}

