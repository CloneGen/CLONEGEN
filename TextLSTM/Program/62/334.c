int i, b;

int main () {
    char a [50];
    cin.getline (a, 50);
    b = strlen (a);
    for (i = 0; i < b; i++) {
        if (a[i] != ' ')
            cout << a[i];
        else if (a[i] == ' ' && a[i + 1] != ' ')
            cout << ' ';
    }
}

