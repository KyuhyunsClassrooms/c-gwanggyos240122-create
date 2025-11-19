#include <stdio.h>

typedef struct {
    int g, c, n;
    char name[30];
} Stu;

int main() {
    Stu s[100];
    int i, j, t, cnt;

    scanf("%d", &cnt); // 학생 수

    for(i = 0; i < cnt; i++)
        scanf("%d %d %d %s", &s[i].g, &s[i].c, &s[i].n, s[i].name);

    // 정렬
    for(i = 0; i < cnt - 1; i++) {
        for(j = i + 1; j < cnt; j++) {
            if(s[i].g > s[j].g ||
              (s[i].g == s[j].g && s[i].c > s[j].c) ||
              (s[i].g == s[j].g && s[i].c == s[j].c && s[i].n > s[j].n)) {

                Stu temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    // 출력
    for(i = 0; i < cnt; i++)
        printf("%d %d %d %s\n", s[i].g, s[i].c, s[i].n, s[i].name);

    return 0;
}
