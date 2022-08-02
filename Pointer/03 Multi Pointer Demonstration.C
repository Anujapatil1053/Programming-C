#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 21;
    int  *p = &No;
    int  **q = &p;
    int  ***m = &q;
    int  ****x = &m;
    int  *****r = &x;

    printf("\n No = %d",&No);
    printf("\n p  = %d",&p);
    printf("\n q  = %d",&q);
    printf("\n m  = %d",&m);
    printf("\n x  = %d",&x);
    printf("\n r  = %d",&r);
    printf("\n====================\n\n");
    getch();

    printf("\n %d",No);     /// 21
    printf("\n %d",&No);    /// 748
    printf("\n %d",&p);     /// 744
    printf("\n %d",*p);     /// 21
    printf("\n %d",**r);    /// 740
    printf("\n %d",**(&m)); /// 744
    printf("\n %d",&(***x));/// 744
    printf("\n %d",****r);  /// 748
    printf("\n %d",&(**q)); /// 748
    printf("\n %d",***(&r));/// 740
    printf("\n %d",**q);     /// 21
    printf("\n %d",***(&q)); /// 21

    getch();
    return 0;
}
