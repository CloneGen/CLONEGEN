int main () {
    char a [11], str [4], max;
    int position, i = 0;
    while (cin.getline (a, sizeof (a), ' ') && cin.getline (str, sizeof (str), '\n')) {
        max = a[0];
        for (i = 0; i < strlen (a); i++)
            if (max < a[i])
                max = a[i];
        for (i = 0; i < strlen (a); i++)
            if (max == a[i]) {
                position = i;
                break;
            }
        for (i = 0; i <= position; i++)
            cout << a[i];
        cout << str;
        for (i = position + 1; i < strlen (a); i++)
            cout << a[i];
        cout << endl;
    }
    return 0;
}

