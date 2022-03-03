int year (int n) {
    n -= 1;
    int sum = 0;
    sum += n * (365 % 7);
    sum = sum % 7;
    int w400 = 400 / 4 - 400 / 100 + 1;
    w400 = w400 % 7;
    sum += (n / 400) * w400;
    n = n % 400;
    int w100 = (100 / 4 - 1) % 7;
    sum += (n / 100) * w100;
    n = n % 100;
    sum += (n / 4);
    sum = sum % 7;
    return sum;
}

int main () {
    int n, m, l;
    int a [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> n >> m >> l;
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
        a[1] += 1;
    int d = l;
    for (m = m - 1; m >= 1; m--)
        d += a[m - 1];
    d += year (n);
    d = d % 7;
    char week [7] [5] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
    cout << week[d];
    return 0;
}

