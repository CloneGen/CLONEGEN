int main () {
    int n, a, b, c, d, e, result;
    cin >> n;
    e = n % 10;
    d = (n % 100 - e) / 10;
    c = (n % 1000 - d * 10 - e) / 100;
    b = (n % 10000 - c * 100 - d * 10 - e) / 1000;
    a = (n - n % 10000) / 10000;
    if (n > 10000)
        result = e * 10000 + d * 1000 + c * 100 + b * 10 + a;
    else if (n > 1000)
        result = e * 1000 + d * 100 + c * 10 + b;
    else if (n > 100)
        result = e * 100 + d * 10 + c;
    else if (n > 10)
        result = e * 10 + d;
    else
        result = e;
    cout << result << endl;
    return 0;
}

