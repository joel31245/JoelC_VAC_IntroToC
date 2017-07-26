#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char buffer[26];
int l=0;
 char *Morse[26];
//initializing Morse Code array
void initMorse(){
    Morse[0] = "._" ;
    Morse[1] = "_...";
    Morse[2] = "_._." ;
    Morse[3] = "_.." ;
    Morse[4] = "." ;   //E
    Morse[5] = ".._." ;
    Morse[6] = "__." ;
    Morse[7] = "...." ;  //H
    Morse[8] = ".." ;       //I
    Morse[9] = ".___" ;   //J
    Morse[10] = "_._" ;  //K
    Morse[11] = "._.." ;
    Morse[12] = "__" ;   //M
    Morse[13] = "_." ;
    Morse[14] = "___" ;     //O
    Morse[15] = ".__." ;  //P
    Morse[16] = "__._" ;
    Morse[17] = "._." ;   //R
    Morse[18] = "..." ;
    Morse[19] = "_" ;
    Morse[20] = ".._" ;
    Morse[21] = "..._" ;  //V
    Morse[22] = ".__" ;
    Morse[23] = "_.._" ;
    Morse[24] = "_.__" ;
    Morse[25] = "__.." ; //Z
}
int solution(char *s,int strt,char **Morse,int len){
    int i,j,noMatch=0,k,prev,tem;
    int mlen;
    if(strt!=len)
        for(i=0;i<26;i++){
            mlen=strlen(Morse[i]);
            if(strt+mlen<=len){
                for(j=strt,k=0;j<strt+mlen&&k<mlen;j++,k++){
                    if(Morse[i][k]==s[j])
                        continue;
                    else {
                        noMatch=1;
                        break;
                    }
                }
            }
            else{
                continue;
            }
            if(noMatch==0){
                 //print pattern when complete string matched
                 if(strt+mlen==len){
                    // end case of string
                    buffer[l]=i+65;
                    printf("%s\n",buffer);
                    buffer[l]=0;
                }
                else{
                    noMatch=0;
                    buffer[l]=i+65; // put in correct char
                    l++; // move to next english char position
                    solution(s,strt+mlen,Morse,len);
                    l--;                 // while backtracking...
                    buffer[l]=0;      //  clearing buffer just up to the previous location, this way hits up all the possible combos with this letter at this position
                }
            }
            else{
                noMatch=0; // reseting for the next letter
            }
        }
    else{
        buffer[l]=0;
    }
    return 1;
}

int main() {

char s[100];
printf("Enter the input string of Morse code:\n");
scanf("%s",s);
initMorse();
printf("Possible translations are:\n");
solution(s,0,Morse,strlen(s));
return 0;
}
