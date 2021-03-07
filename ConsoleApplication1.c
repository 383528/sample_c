#include <stdio.h>
#include <math.h>

int add(int a, int b) {
    return a + b;
}
void p_add(int *ans, int a, int b) {
    *ans = a + b;
    printf("%d\n", *ans);
}
int main()
{
    練習ブランチ２での変更
    int a = 40;
    int b = 30;
    int ans=0;

    printf("%d\n", ans);

    ans = add(a, b);

    printf("%d\n", ans);

    p_add(&ans, a, b);







    return 0;


}