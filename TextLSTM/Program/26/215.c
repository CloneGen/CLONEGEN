int main () {
    char a [101];
    cin.getline (a, 101);
    int flag = 0;
    for (int i = 0;
    i < strlen (a); i++) {
        if (a[i] == ' ')
            flag++;
        else {
            if (flag > 1) {
                for (int j = i;
                j < strlen (a); j++)
                    a[j - flag + 1] = a[j];
                for (int j = strlen (a) - flag + 1;
                j < strlen (a); j++)
                    a[j] = '\0';
            }
            i = i - flag;
            flag = 0;
        }
    }
    cout << a << endl;
}

