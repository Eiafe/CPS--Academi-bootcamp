#include<stdio.h>
#include<math.h>
int main(){
    double a,circle,Circumference;
    scanf("%lf",&a);
    circle=M_PI*a*a;
    Circumference=2*M_PI*a;
    printf("%.6lf %.6lf",circle,Circumference);
    return 0;

}


