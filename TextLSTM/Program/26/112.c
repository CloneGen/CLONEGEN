int main () {
    char input [101];
    char *place, *ptr;
    cin.getline (input, 102);
    place = input;
    ptr = input;
    while (true) {
        while (*ptr != ' ' && *ptr != '\0')
            *place++ = *ptr++;
        if (*ptr == '\0')
            break;
        *place++ = ' ';
        while (*ptr == ' ')
            ptr++;
    }
    *place = '\0';
    cout << input << endl;
    return 0;
}

