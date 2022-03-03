long p (int r, int s);

int main () {
    char num [1000] = {0}, numx [1000] = {0};
    int n [1000] = {0}, x [1000];
    int a, b, j = 0;
    long c;
    unsigned long N = 0;
    cin >> a;
    getchar ();
    cin.getline (num, 1001, ' ');
    cin >> b;
    for (int i = 0;
    i < strlen (num); i++) {
        if (num[i] >= 65 && num[i] < 91)
            n[i] = num[i] - 65 + 10;
        else if (num[i] >= 97 && num[i] < 123)
            n[i] = num[i] - 97 + 10;
        else
            n[i] = num[i] - '0';
        N = N +n[i] * p (a, strlen (num) - i - 1);
    }
    c = N;
    if (c == 0)
        cout << "0";
    while (c != 0) {
        x[j] = c % b;
        c = c / b;
        j++;
    }
    for (int i = j - 1;
    i >= 0; i--) {
        if (x[i] >= 10)
            numx[i] = x[i] + 'A' - 10;
        else
            numx[i] = x[i] + '0';
        cout << numx[i];
    }
    return 0;
}

long p (int r, int s) {
    long ans = 1;
    for (int k = 0;
    k < s; k++)
        ans = ans * r;
    return (ans);
}

