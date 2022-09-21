#include <stdio.h>
#include <string.h>

int romanToInt(char* s) {
    int rs = 0;
    int chln = strlen(s);
        for (int i = 0; i < chln; i++) {
            if (s[i] == 'I') {
                if (i+1 < chln && ((s[i + 1] == 'V') || (s[i + 1] == 'X'))) {
                    rs -= 1;
                }
                else {
                    rs += 1;
                }
            }
            else if (s[i] == 'V') {
                rs += 5;
            }
            else if (s[i] == 'X') {
                if (i+1 < chln && ((s[i + 1] == 'L') || (s[i + 1] == 'C'))) {
                    rs -= 10;
                }
                else {
                    rs += 10;
                }
            }
            else if (s[i] == 'L') {
                rs += 50;
            }
            else if (s[i] == 'C') {
                if (i+1 < chln && ((s[i + 1] == 'D') || (s[i + 1] == 'M'))) {
                    rs -= 100;
                }
                else {
                    rs += 100;
                }
            }
            else if (s[i] == 'D') {
                rs += 500;
            }
            else if (s[i] == 'M') {
                rs += 1000;
            }
        }

}