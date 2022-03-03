inline int prime (int a);

int main () {
    int m, b, c;
    cin >> m;
    for (b = 3; b <= m / 2; b++) {
        c = m - b;
        if (prime (b) == 1 && prime (c) == 1)
            cout << b << " " << c << endl;
    }
    return 0;
}

inline int prime (int a) {
    int i;
    for (i = 2; i < a; i++) {
        if (a % i == 0)
            break;
    }
    if (i == a)
        return 1;
    else
        return 0;
}

