int main () {
    int a, n [7];
    cin >> a;
    n[1] = a / 100;
    a = a % 100;
    n[2] = a / 50;
    a = a % 50;
    n[3] = a / 20;
    a = a % 20;
    n[4] = a / 10;
    a = a % 10;
    n[5] = a / 5;
    n[6] = a % 5;
    int i;
    for (i = 1; i <= 6; i++)
        cout << n[i] << endl;
    return 0;
}

