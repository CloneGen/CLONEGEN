int main () {
    int n, a, b, i = 0, h = 0;
    cin >> n;
    while (n != 0) {
        cin >> a >> b;
        if (a >= 90 && a <= 140 && b >= 60 && b <= 90)
            i++;
        else
            i = 0;
        if (h <= i)
            h = i;
        n--;
    }
    cout << h << endl;
    return 0;
}

