
#include<stdio.h>
#include<stdlib.h>

int main()
{
char registrationnumber[20];
char firstname[19];
char lastname[24];

float introtoprogramming;
float networking;
float accounting;
float operatingSystem;
float computerApplications;

printf("Enter your registrationnumber\n");
scanf("%s",&registrationnumber);

printf("Enter your firstname\n");
scanf("%s",&firstname);

printf("Enter your lastname\n");
scanf("%s",&lastname);

printf("Registration Number %s\n", registrationnumber);
printf("First name %s\n", firstname);
printf("Last name %s\n", lastname);

printf("Enter your grade in programming\n");
scanf("%f",&introtoprogramming);

printf("Enter your grade in networking\n");
scanf("%f",&networking);

printf("Enter your grade in accounting\n");
scanf("%f",&accounting);

printf("Enter your grade in operating systems\n");
scanf("%f",&operatingSystem);

printf("Enter your grade in computer Applications\n");
scanf("%f",&computerApplications);

printf("Intro to programming %.2f\n",introtoprogramming );
printf("Networking %.2f\n",networking );
printf("Accounting %.2f\n", accounting);
printf("Operating Systems %.2f\n",operatingSystem );
printf("Computer Applications %.2f\n",computerApplications );

return 0;
}
