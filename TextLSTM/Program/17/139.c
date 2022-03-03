int brackets (void) {
    int chart [2] [100], c, count = 0, pos, state = 0, tmp, first_left, previous_left, end_flag = 0;
    for (;; count++) {
        c = getchar ();
        if (c == EOF)
            return 1;
        if (c == '\n') {
            break;
        }
        chart[0][count] = c;
        if (c == 40) {
            chart[1][count] = 36;
        }
        else if (c == 41) {
            chart[1][count] = 63;
        }
        else {
            chart[1][count] = 32;
        }
    }
    for (pos = 0; end_flag == 0;) {
        switch (state) {
        case 0 :
            if (chart[1][pos] == 36) {
                state = 1;
                first_left = pos;
                previous_left = pos;
                if (pos == count) {
                    end_flag = 1;
                }
                else {
                    pos += 1;
                }
            }
            else {
                if (pos == count) {
                    end_flag = 1;
                }
                else {
                    pos += 1;
                }
            }
            break;
        case 1 :
            if (chart[1][pos] == 63) {
                chart[1][pos] = 32;
                chart[1][previous_left] = 32;
                if (previous_left != first_left) {
                    state = 2;
                    pos = previous_left;
                }
                else {
                    if (pos == count) {
                        end_flag = 1;
                    }
                    else {
                        state = 0;
                        pos += 1;
                    }
                }
            }
            else if (chart[1][pos] == 36) {
                previous_left = pos;
                pos += 1;
            }
            else {
                if (pos == count) {
                    end_flag = 1;
                }
                else {
                    pos += 1;
                }
            }
            break;
        case 2 :
            if (chart[1][pos] == 36) {
                previous_left = pos;
                state = 1;
            }
            else {
                pos -= 1;
            }
            break;
        }
        if (pos > count) {
            pos = count;
        }
    }
    for (tmp = 0; tmp < count; tmp++) {
        putchar (chart [0] [tmp]);
        if (tmp == count - 1) {
            putchar ('\n');
        }
    }
    for (tmp = 0; tmp < count; tmp++) {
        putchar (chart [1] [tmp]);
        if (tmp == count - 1) {
            putchar ('\n');
        }
    }
    return 0;
}

int main () {
    while (1) {
        if (brackets () == 1)
            break;
    }
    return 0;
}

