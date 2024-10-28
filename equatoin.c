#include<stdio.h>
#include<math.h> 

int main(){
    double a,b,c, discriminant,realpart,imaginarypart,x1,x2;

    // input coefficient a,b,c 
    printf("Enter coefficients a,b and c: ");
    scanf("%if %if %if",&a,&b,&c);

    if(a==0){
        printf(This is not a quadratic equation.\n");
    }else {
        //calculate the discriminant
        discriminant=b*b-4*a*c;

        if(discriminant > 0){
            //Two roots are formed
            x1 = (-b + sqrt(discriminant)) /(2*a);
            x2 = (-b - sqrt(discriminant)) /(2*a);

            printf("Two distinct real roots: x1= %.2lf and x2 = %.2lf\n", x1,x2);
        }else if (discriminant == o){
            //one real root (double root)x1 =-b/(2*a)
            printf("One real root (double root):x =%.2lf\n",x1);
        }else{
            //complex roots
            realpart = -b/(2*a);
            imaginarypart=sqrrt(-discriminant)/(2*a);
                    printf("Two complex roots:x1 =%.2lf + %.2lfi and x2 =%.2lf -%.2lfi\n",realpart,imaginarypart,realpart,imaginarypart);
        }
    }

    return 0;
}
