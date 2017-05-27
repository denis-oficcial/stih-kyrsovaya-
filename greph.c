#include<stdio.h>
#include<stdlib.h>

const length_pol = 80;

void top_pol(){
unsigned char i;
printf("╔");
for (i=0; i<length_pol ; i++)
printf("═");
printf("╗\n");
}

void str_pol(char* s){
printf("║");
int i;
for (i = 0 ; ((s[i]!='\0') && (i < length_pol)); i++){
printf("%c",s[i]);
}

for (;i < length_pol; i++){
printf(" ");
}
printf("║\n");
}

void bottom_pol(){
char i;
printf("╚");
for (i=0; i<length_pol ; i++)
printf("═");
printf("╝");
}

int main()
{
char* s = malloc(sizeof(char)*length_pol);
system("chcp 65001");
system("CLS");
top_pol();
s[3] = '\0';
str_pol(s);
bottom_pol();
return 0;
}
