main () {
    int a [5];
    for (a[0] = 1; a[0] <= 5; a[0]++) {
        for (a[1] = 1; a[1] <= 2; a[1]++) {
            if (a[1] == a[0])
                continue;
            else {
                for (a[2] = 1; a[2] <= 2; a[2]++) {
                    if (a[2] == a[0] || a[2] == a[1])
                        continue;
                    else {
                        for (a[3] = 1; a[3] <= 5; a[3]++) {
                            if (a[3] == a[0] || a[3] == a[1] || a[3] == a[2])
                                continue;
                            else {
                                for (a[4] = 1; a[4] <= 5; a[4]++) {
                                    if (a[4] == a[1] || a[4] == a[2] || a[4] == a[3] || a[4] == a[0] || a[4] == 2 || a[4] == 3)
                                        continue;
                                    else {
                                        if (a[0] == 1 || a[0] == 2) {
                                            if (a[4] != 1)
                                                break;
                                        }
                                        if (a[1] == 1 || a[1] == 2) {
                                            if (a[1] != 2)
                                                break;
                                        }
                                        if (a[2] == 1 || a[2] == 2) {
                                            if (a[0] != 5)
                                                break;
                                        }
                                        if (a[3] == 1 || a[3] == 2) {
                                            if (a[2] == 1)
                                                break;
                                        }
                                        if (a[4] == 1 || a[4] == 2) {
                                            if (a[3] != 1)
                                                break;
                                        }
                                        printf ("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

