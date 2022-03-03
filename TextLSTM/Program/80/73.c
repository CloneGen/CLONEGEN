int leap (int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 1;
            }
            return 0;
        }
        return 1;
    }
    return 0;
}

int main () {
    int sy, sm, sd;
    int ey, em, ed;
    int monthday [2] [13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    scanf ("%d %d %d", &sy, &sm, &sd);
    scanf ("%d %d %d", &ey, &em, &ed);
    int tmp;
    if ((sy > ey) || (sy == ey && sm > em) || (sy == ey && sm == em && sd > ed)) {
        tmp = sy;
        sy = ey;
        ey = tmp;
        tmp = sm;
        sm = em;
        em = tmp;
        tmp = sd;
        sd = ed;
        ed = tmp;
    }
    int ans = 0;
    while (sy != ey || sm != em || sd != ed) {
        ans++;
        sd++;
        if (sd > monthday[leap (sy)][sm]) {
            sd = 1;
            sm++;
        }
        if (sm == 13) {
            sm = 1;
            sy++;
        }
    }
    printf ("%d\n", ans);
    return 0;
}

