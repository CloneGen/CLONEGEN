int main () {
    char firstline [10000], secondline [10000], temp [100];
    int enter [3000], exit [3000], k = 0, i, g = 0, j, num, min = 1000, max = 0, point [1000] = {0}, result = 0;
    cin.getline (firstline, 10000);
    cin.getline (secondline, 10000);
    for (i = 0; i <= strlen (firstline); i++) {
        if (firstline[i] != ',' && firstline[i] != '\0') {
            temp[k] = firstline[i];
            k++;
        }
        else {
            enter[g] = atoi (temp);
            memset (temp, 0, sizeof (temp));
            g++;
            k = 0;
        }
    }
    num = g;
    g = 0;
    for (i = 0; i <= strlen (secondline); i++) {
        if (secondline[i] != ',' && secondline[i] != '\0') {
            temp[k] = secondline[i];
            k++;
        }
        else {
            exit[g] = atoi (temp);
            memset (temp, 0, sizeof (temp));
            g++;
            k = 0;
        }
    }
    for (i = 0; i < num; i++) {
        if (enter[i] < min)
            min = enter[i];
    }
    for (i = 0; i < num; i++) {
        if (exit[i] > max)
            max = exit[i];
    }
    for (i = min; i < max; i++) {
        for (j = 0; j < num; j++) {
            if (enter[j] <= i && exit[j] > i)
                point[i]++;
        }
    }
    for (i = min; i < max; i++) {
        if (point[i] >= result)
            result = point[i];
    }
    cout << num << " " << result;
    return 0;
}

