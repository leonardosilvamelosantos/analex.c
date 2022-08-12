#include <stdio.h>
#include <ctype.h>
#define NUM 256

int linhas = 1, coluna=1;
int token, tokenval=-1;

int analex() {
int ch = getchar() ;
while (ch ==  '/t '){
ch = getchar();
coluna += 4;
}
while (ch ==  ' '){
ch = getchar();
coluna ++;
}

while (ch ==  ' '){
ch = getchar();
while (ch ==  '\n '){
ch = getchar();
linha ++;
coluna = 1;
}
  
  if(ch=='+' || ch=='-') {
    return ch;}
  if(ch=='*' || ch=='/'){
    return ch;
}
  if(ch=='(' || ch==')') {
    return ch;}
  
  if(ch==';') {
    return ch;}

  if(isdigit(ch)) {
    tokenval=ch-'0';
    ch=getchar()
      
        while(isdigit(ch)){
          tokenval = tokenval * 10 + ch -'0';
          
    return NUM;
  }
}
