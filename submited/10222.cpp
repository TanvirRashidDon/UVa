#include<stdio.h>

int main()
{
    char in[10000];
    int i;
    while(gets(in)){
        for(i=0;in[i];i++)
            switch(in[i]){
                case ' ':printf(" ");break;
                case 'd': case 'D':printf("a");break;
                case 'm': case 'M':printf("b");break;
                case 'b': case 'B':printf("c");break;
                case 'g': case 'G':printf("d");break;
                case 't': case 'T':printf("e");break;
                case 'h': case 'H':printf("f");break;
                case 'j': case 'J':printf("g");break;
                case 'k': case 'K':printf("h");break;
                case 'p': case 'P':printf("i");break;
                case 'l': case 'L':printf("j");break;
                case ';': case ':':printf("k");break;
                case '\'': case '?':printf("l");break;
                case '.': case '>':printf("m");break;
                case ',': case '<':printf("n");break;
                case '[': case '{':printf("o");break;
                case ']': case '}':printf("p");break;
                case 'e': case 'E':printf("q");break;
                case 'y': case 'Y':printf("r");break;
                case 'f': case 'F':printf("s");break;
                case 'u': case 'U':printf("t");break;
                case 'o': case 'O':printf("u");break;
                case 'n': case 'N':printf("v");break;
                case 'r': case 'R':printf("w");break;
                case 'v': case 'V':printf("x");break;
                case 'i': case 'I':printf("y");break;
                case 'c': case 'C':printf("z");break;
            }
        printf("\n");
    }
}
