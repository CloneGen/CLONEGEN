void oushu (int n) {
    cout << n << "/2=" << n / 2 << endl;
}

void jishu (int n) {
    cout << n << "*3+1=" << n * 3 + 1 << endl;
}

void jiaogu (int n) {
    if (n % 2 == 0) {
        oushu (n);
        n = n / 2;
    }
    else {
        jishu (n);
        n = n * 3 + 1;
    }
    if (n > 1)
        jiaogu (n);
}

int main () {
    int n;
    cin >> n;
    if (n > 1)
        jiaogu (n);
    cout << "End" << endl;
    return 0;
}

