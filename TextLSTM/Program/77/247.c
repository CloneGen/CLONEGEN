void youxi (int);
char boy;
char paidui [100] = {0};

int main () {
    cin.getline (paidui, 100);
    boy = paidui[0];
    youxi (0);
    return 0;
}

void youxi (int num) {
    if (paidui[num] == 0)
        return;
    else {
        if (paidui[num] == boy)
            youxi (num + 1);
        else {
            int i;
            for (i = num; i >= 0; i--) {
                if (paidui[i] == boy) {
                    cout << i << ' ' << num << endl;
                    paidui[i] = ' ';
                    paidui[num] = ' ';
                    break;
                }
            }
            youxi (num + 1);
        }
        return;
    }
}

