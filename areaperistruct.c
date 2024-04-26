#include <stdio.h>
typedef struct circle{
    float  rad;
    float area;
    float para;
} circle;
int main()
{
    circle c[20];
    int i,n;
    printf("enter the no.of data you enter");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the data of %d\n",i+1);
        scanf("%f",&c[i].rad);
    }
    for(i=0;i<n;i++)
    {
        c[i].area=3.14*c[i].rad*c[i].rad;
        c[i].para=2*3.14*c[i].rad;
    }
    for(i=0;i<n;i++)
    {
        printf("radius:%f,area:%f,perimeter:%f\n",c[i].rad,c[i].area,c[i].para);
    }

    return 0;
}
/*
enter the no.of data you enter3
enter the data of 1
1
enter the data of 2
5
enter the data of 3
2
radius:1.000000,area:3.140000,perimeter:6.280000
radius:5.000000,area:78.500000,perimeter:31.400000
radius:2.000000,area:12.560000,perimeter:12.560000
  */
