int main () {
    char words [100 * 20], word [100] [20];
    gets (words);
    int i;
    int j = 0, k = 0;
    for (i = 0; words[i] != 0; i++) {
        if (words[i] == ' ') {
            word[j][k] = 0;
            j++;
            k = 0;
        }
        else {
            word[j][k] = words[i];
            k++;
        }
    }
    word[j][k] = 0;
    char *max, *min;
    max = word[0];
    min = word[0];
    for (i = 1; i <= j; i++) {
        max = (strlen (word[i]) > strlen (max)) ? word[i] : max;
        min = (strlen (word[i]) < strlen (min)) ? word[i] : min;
    }
    printf ("%s\n%s", max, min);
    return 0;
}

