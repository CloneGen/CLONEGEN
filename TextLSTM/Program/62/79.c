int main () {
    char str [100];
    cin.getline (str, 100);
    char *p = str;
    char delspace [100] = {0};
    int i = 0, j = 0;
    while (p[i] != '\0') {
        if (p[i] == ' ')
            while (p[i + 1] == ' ') {
                i++;
            }
        delspace[j++] = p[i++];
    }
    cout << delspace << endl;
    return 0;
}

