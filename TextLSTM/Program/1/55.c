int de (int s, int a) {
    int sum = 0;
    if (a == 1)
        return 1;
    else if (s > a)
        return 0;
    for (int i = s;
    i <= a; i++)
        if (a % i == 0)
            sum = sum + de (i, a / i);
    return sum;
}

int main () {
    int n;
    cin >> n;
    while (n > 0) {
        int a;
        cin >> a;
        cout << de (2, a) << endl;
        n--;
    }
    return 0;
}

