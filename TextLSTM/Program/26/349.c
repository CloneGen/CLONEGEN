int main () {
    char a [101];
    cin.get (a, 101, '\n');
    for (int i = 0;
    i < strlen (a); i++) {
        if (a[i] != ' ')
            cout << a[i];
        else if (a[i + 1] != ' ')
            cout << a[i];
        else
            continue;
    }
    return 0;
}

