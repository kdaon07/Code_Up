#include <stdio.h>

int main() {
    int w, h, p, q;
    int n1=1, n2=1, t;

    scanf("%d %d\n%d %d\n%d", &w, &h, &p, &q, &t);
    for(int i=0; i<t; i++)
    {
      if (p+n1>w || p+n1<0)
        n1 = -n1;
      if (q+n2>h || q+n2<0)
        n2 = -n2;
      p += n1;
      q += n2;
    }
    printf("%d %d", p, q);
    return 0;
}
