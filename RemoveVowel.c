#include<stdio.h>
#include<string.h>
 void my_strncopy(char*dest,char*src,int n);
 void string_process(char*str,char*last);
 int main(){
      
     char text[1000];
     scanf("%[^\n]",text);
     
     int size=strlen(text);
    
     string_process(text,text+size);
     
 }
 void string_process(char*str,char*last){
     char*start=last;
     char*end=last;
     char*temporary=str;
     int max_size=0;
     int min_size=700;
     
     
     while(start>=temporary){
         while(start>=temporary&&*start==32){
             start--;
         }
         end=start;
         while(start>=temporary&&*start!=32){
             start--;
         }
         char *word_start=start+1;
         char word[100];
         int word_size=end-start;
         strncpy(word,word_start,word_size);
         word[word_size]='\0';
         printf("%s ",word);
         end=start;
     }
     
 }
