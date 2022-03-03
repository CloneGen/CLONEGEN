int main () {
    char str [1000];
    char *p;
    cin.getline (str, 1000);
    p = str;
    for (; *p != '\0'; p++) {
        if (*p != ' ')
            cout << *p;
        else {
            if (*(p + 1) != ' ')
                cout << " ";
        }
    }
    return 0;
}

