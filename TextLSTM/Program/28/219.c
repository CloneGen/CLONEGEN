int main () {
    char test = '1', *p;
    int i = 0;
    while (1) {
        while (test != '\n' && test == ' ')
            test = getchar ();
        int count = 0;
        while (test != '\n' && test != ' ' && test != 0) {
            test = getchar ();
            count++;
        }
        if (i == 0)
            count--;
        printf ("%d", count);
        if (test != '\n')
            printf (",");
        else
            break;
        i++;
    }
    return 0;
}

