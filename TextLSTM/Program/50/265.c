int main () {
    int a [11] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30}, b [12], w;
    cin >> w;
    b[0] = 12;
    for (int i = 1;
    i < 12; i++)
        b[i] = b[i - 1] + a[i - 1];
    for (int i = 0;
    i < 12; i++)
        if ((w + b[i] % 7) % 7 == 5)
            cout << i + 1 << endl;
    return 0;
}

