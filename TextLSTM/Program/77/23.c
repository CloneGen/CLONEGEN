char line [110];
char boy, girl;

int match (int i, int l) {
    int j;
    if (i == l)
        return 0;
    if (line[i] == girl) {
        for (j = i - 1; j >= 0; j--) {
            if (line[j] == boy) {
                printf ("%d %d\n", j, i);
                line[j] = ' ';
                break;
            }
        }
    }
    match (i + 1, l);
    return 0;
}

int main () {
    int l;
    int i;
    scanf ("%s", line);
    l = strlen (line);
    boy = line[0];
    for (i = 1; i < l; i++) {
        if (line[i] != boy) {
            girl = line[i];
            break;
        }
    }
    match (0, l);
    return 0;
}

