int main () {
    char a [1001], t;
    int num, i = 0;
    cin >> a;
    t = a[0];
    num = 1;
    while (a[i++] != '\0') {
        if (a[i] == a[i - 1] || fabs (a[i] - a[i - 1]) == 'a' - 'A') {
            num++;
        }
        else {
            if (a[i - 1] >= 'a' && a[i - 1] <= 'z')
                a[i - 1] += 'A' - 'a';
            cout << "(" << a[i - 1] << "," << num << ")";
            num = 1;
            t = a[i];
        }
    }
    cout << endl;
    return 0;
}

