int NUM = 0;
void num (int, int);

int main () {
    int p, i, m [21], n [21];
    cin >> p;
    for (i = 1; i <= p; i++) {
        cin >> m[i] >> n[i];
        num (m[i], n[i]);
        cout << NUM << endl;
        NUM = 0;
    }
    return 0;
}

void num (int m, int n) {
    if (m == 0 || n == 1)
        NUM = NUM +1;
    else if (m < n)
        num (m, n - 1);
    else {
        num (m, n - 1);
        num (m - n, n);
    }
}

