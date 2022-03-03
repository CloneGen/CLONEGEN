int n, m, a [100];

void daoxu (int *s, int *e) {
    int temp;
    for (; s < e; s++, e--) {
        temp = *s;
        *s = *e;
        *e = temp;
    }
}

int main () {
    int i, *p = a;
    cin >> n >> m;
    for (i = 0; i < n; i++) {
        cin >> *p++;
    }
    daoxu (a, a + n - m - 1);
    daoxu (a + n - m, a + n - 1);
    daoxu (a, a + n - 1);
    p = a;
    cout << *p++;
    for (; p < a + n; p++) {
        cout << " " << *p;
    }
    cout << endl;
    return 0;
}

