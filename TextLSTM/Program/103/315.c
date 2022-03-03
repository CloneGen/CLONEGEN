struct  yasuohou {
    char letter;
    int count;
}
yasuohou;

int main () {
    char str [100];
    struct  yasuohou lettercount [100];
    int i, j;
    gets (str);
    for (i = 0; i < strlen (str); i++) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
    }
    i = 0;
    j = 0;
    lettercount[j].letter = str[i];
    lettercount[j].count = 1;
    for (i = 0; i < strlen (str); i++) {
        if (str[i + 1] == str[i]) {
            lettercount[j].count++;
        }
        else if (str[i + 1] != '\0' && str[i + 1] != str[i]) {
            lettercount[j].count++;
            j++;
            lettercount[j].letter = str[i + 1];
            lettercount[j].count = 1;
        }
        else if (str[i + 1] == '\0') {
            lettercount[j].count++;
            break;
        }
    }
    for (i = 0; i <= j; i++) {
        printf ("(%c%c%d)", lettercount[i].letter, ',', (lettercount[i].count) - 1);
    }
    return 0;
}

