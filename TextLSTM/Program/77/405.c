char input [100];
int lidui [100];
int boynum [100];

void boysAndGirls (char boy, int pos, int dis, int charlong) {
    if (dis == charlong)
        boynum[charlong - 1] = 0;
    else {
        if (lidui[pos] == 1 || input[pos] == boy || pos < dis || lidui[pos - dis] == 1)
            boysAndGirls (boy, pos + 1, dis, charlong);
        else {
            if (pos >= charlong - 1)
                boysAndGirls (boy, 0, dis + 1, charlong);
            else {
                if (input[pos - dis] != boy)
                    boysAndGirls (boy, pos + 1, dis, charlong);
                else {
                    boynum[pos] = pos - dis;
                    lidui[pos] = 1;
                    lidui[pos - dis] = 1;
                    boysAndGirls (boy, pos + 1, dis, charlong);
                }
            }
        }
    }
}

int main () {
    int i, charlong;
    char boy;
    cin >> input;
    boy = input[0];
    charlong = strlen (input);
    boysAndGirls (boy, 0, 1, charlong);
    for (i = 0; i < charlong; i++) {
        if (i == charlong - 1)
            cout << "0 " << charlong - 1;
        else {
            if (boynum[i] == 0)
                continue;
            else
                cout << boynum[i] << " " << i << endl;
        }
    }
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    return 0;
}

