int main () {
    int i;
    int cmp;
    char s1 [MAX +1], s2 [MAX +1];
    gets (s1);
    gets (s2);
    for (i = 0; s1[i] && s2[i]; i++) {
        if (s1[i] >= 'a' && s1[i] <= 'z') {
            s1[i] -= 'a' - 'A';
        }
        if (s2[i] >= 'a' && s2[i] <= 'z') {
            s2[i] -= 'a' - 'A';
        }
        if (s1[i] != s2[i]) {
            printf ((s1[i] > s2[i]) ? ">" : "<");
            break;
        }
    }
    if (s1[i] == 0 && s2[i] == 0) {
        printf ("=");
    }
    return 0;
}

