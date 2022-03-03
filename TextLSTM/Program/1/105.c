int num, s = 1;

void divide (int n, int a) {
    for (int i = n;
    i <= a / s; i++) {
        s *= i;
        if (s == a)
            num++;
        else if (s < a && a % s == 0)
            divide (i, a);
        s /= i;
    }
}

int main () {
    int n, i, a;
    cin >> n;
    for (i = 0; i < n; i++) {
        num = 0;
        cin >> a;
        divide (2, a);
        cout << num << endl;
    }
    return 0;
}

