int main () {
    char str [31], *p;
    cin.getline (str, 31);
    p = str;
    int flag = 0;
    do {
        if (*p >= '0' && *p <= '9') {
            cout << *p;
            p++;
            flag = 1;
        }
        else {
            p++;
            if (*p >= '0' && *p <= '9' && flag == 1)
                cout << endl;
        }
    }
    while (*p != '\0');
    cout << endl;
    return 0;
}

