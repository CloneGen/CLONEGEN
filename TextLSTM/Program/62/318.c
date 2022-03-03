int main () {
    char str [255];
    char words [255] [255];
    int index = 0;
    while (scanf ("%s", str)) {
        strcpy (words[index++], str);
        char c = getchar ();
        if (c == '\n')
            break;
    }
    for (int i = 0;
    i < index; i++) {
        printf ("%s", words[i]);
        if (i == index - 1)
            printf ("\n");
        else
            printf (" ");
    }
    return 0;
}

