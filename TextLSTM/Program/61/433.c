int main () {
    int str [50] = {1, 1}, num [20];
    int n, i;
    for (i = 2; i < 50; i++)
        str[i] = str[i - 1] + str[i - 2];
    cin >> n;
    for (i = 0; i <= n - 1; i++)
        cin >> num[i];
    for (i = 0; i <= n - 1; i++)
        cout << str[num[i] - 1] << endl;
    return 0;
}

