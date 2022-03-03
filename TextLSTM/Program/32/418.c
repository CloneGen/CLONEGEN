void reverse (char temp [101]) {
    int i = 0;
    for (i = 0; i < strlen (temp) / 2; i++) {
        char t = '\0';
        t = temp[i];
        temp[i] = temp[strlen (temp) - i - 1];
        temp[strlen (temp) - i - 1] = t;
    }
}

int main () {
    int n = 0;
    cin >> n;
    while (n--) {
        cin.get ();
        char a [101] = {'\0'}, b [101] = {'\0'}, temp [101] = {'\0'}, mark = '+';
        cin.getline (a, 101, '\n');
        cin.getline (b, 101, '\n');
        if ((strlen (a) == strlen (b) && strcmp (a, b) < 0) || (strlen (a) < strlen (b))) {
            strcpy (temp, a);
            strcpy (a, b);
            strcpy (b, temp);
            mark = '-';
        }
        reverse (a);
        reverse (b);
        int i = 0;
        for (i = 0; i < strlen (b); i++)
            if (a[i] < b[i]) {
                a[i] = a[i] + 10 - b[i] + '0';
                a[i + 1]--;
            }
            else if (a[i] >= b[i])
                a[i] = a[i] - b[i] + '0';
        reverse (a);
        cout << a << endl;
    }
    return 0;
}

