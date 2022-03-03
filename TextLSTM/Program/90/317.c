int apple (int, int);

int main () {
    int t, i, num [20] [2], way [20];
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> num[i][0] >> num[i][1];
        way[i] = apple (num[i][0], num[i][1]);
    }
    for (i = 0; i < t; i++)
        cout << way[i] << endl;
    return 0;
}

int apple (int a, int b) {
    if (b == 0 || b == 1)
        return 1;
    else if (b > a)
        return apple (a, a);
    else
        return apple (a, b - 1) + apple (a - b, b);
}

