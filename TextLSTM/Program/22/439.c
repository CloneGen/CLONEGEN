int num [1000];

int main () {
    int index = 0;
    int sec_max;
    int max;
    char c;
    while (true) {
        scanf ("%d", &num[index++]);
        scanf ("%c", &c);
        if (c == '\n')
            break;
    }
    if (index == 1) {
        printf ("No\n");
        return 0;
    }
    max = 0;
    sec_max = 0;
    for (int i = 0;
    i < index; ++i) {
        if (num[i] > max) {
            sec_max = max;
            max = num[i];
        }
        else if (num[i] == max) {
            continue;
        }
        else {
            if (num[i] > sec_max)
                sec_max = num[i];
        }
    }
    if (sec_max == 0) {
        printf ("No");
        return 0;
    }
    if (max == sec_max)
        printf ("%d", max);
    else
        printf ("%d\n", sec_max);
    return 0;
}

