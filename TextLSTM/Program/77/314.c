char line [100], boy;
int flag [100] = {0};
int girlNum [50], n;
void FindBoy (int j);

int main () {
    int i = 1, j = 0;
    line[0] = cin.get ();
    boy = line[0];
    while ((line[i] = cin.get ()) != '\n') {
        if (line[i] != boy)
            girlNum[j++] = i;
        i++;
    }
    n = i;
    FindBoy (n / 2 - 1);
    return 0;
}

void FindBoy (int j) {
    int i;
    if (j != 0)
        FindBoy (j - 1);
    for (i = girlNum[j] - 1; flag[i] == 1 || line[i] != boy;)
        i--;
    cout << i << " " << girlNum[j] << endl;
    flag[girlNum[j]] = 1;
    flag[i] = 1;
}

