char str [100];
void space_clear (char *p);

int main () {
    cin.getline (str, 100);
    space_clear (str);
    return 0;
}

void space_clear (char *p) {
    char *q, *s;
    while (1) {
        if (*p != ' ' && *p != '\0')
            p++;
        else
            break;
    }
    if (*p == '\0')
        cout << str << endl;
    else {
        q = p;
        while (1) {
            if (*q == ' ')
                q++;
            else
                break;
        }
        s = p + 1;
        for (; *q != '\0';)
            *s++ = *q++;
        *s = '\0';
        space_clear (p + 1);
    }
}

