int main () {
    int n, i, person1, person2;
    int know [10000] [2] = {0};
    int *p;
    int flag = 0;
    p = &know[0][0];
    cin >> n;
    while (1) {
        cin >> person1 >> person2;
        if ((person1 == 0) && (person2 == 0))
            break;
        *(p + person1 * 2) = *(p + person1 * 2) + 1;
        *(p + person2 * 2 + 1) = *(p + person2 * 2 + 1) + 1;
    }
    for (i = 0; i <= n - 1; i++)
        if ((*(p + i * 2) == 0) && (*(p + i * 2 + 1) == n - 1)) {
            cout << i;
            flag = 1;
        }
    if (flag == 0)
        cout << "NOT FOUND";
    return 0;
}

