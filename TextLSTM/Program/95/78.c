int main () {
    char a [80] = {0}, b [80] = {0};
    int i, flag = 0;
    cin.getline (a, 80);
    cin.getline (b, 80);
    for (i = 0; i < strlen (a) && i < strlen (b); i++) {
        if (a[i] > 96 && a[i] < 123)
            a[i] = a[i] - 32;
        if (b[i] > 96 && b[i] < 123)
            b[i] = b[i] - 32;
        if (a[i] > b[i]) {
            cout << ">";
            flag = 1;
            break;
        }
        if (a[i] < b[i]) {
            cout << "<";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "=";
    return 0;
}

