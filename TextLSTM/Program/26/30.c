int main () {
    char input [101];
    char *p, *q;
    int end;
    cin.getline (input, 102);
    end = strlen (input);
    p = input;
    q = input;
    while (p < input + end) {
        while (*p != ' ' && *p != '\0')
            *(q++) = *(p++);
        if (p == input + end)
            break;
        *(q++) = *(p++);
        while (*p == ' ')
            p++;
    }
    *q = '\0';
    cout << input << endl;
    return 0;
}

