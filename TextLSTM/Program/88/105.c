int main () {
    char a [31];
    cin.getline (a, 31);
    int i = 0;
    while (a[i] != '\0') {
        if (a[i] >= '0' && a[i] <= '9') {
            char *p = &a[i];
            while (a[i] >= '0' && a[i] <= '9')
                i++;
            a[i] = '\0';
            cout << p << endl;
        }
        i++;
    }
    return 0;
}

