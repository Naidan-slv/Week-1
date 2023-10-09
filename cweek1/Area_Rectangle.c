# include <stdio.h>
int main(){
    float length;
    printf("Hello plese enter your Length? ");
    scanf("%f", &length);
    float width;
    printf("Please enter the width of your rectangle ");
    scanf("%f", &width);

    printf("The area is {%f}*{%f}\n", length,width);
}
