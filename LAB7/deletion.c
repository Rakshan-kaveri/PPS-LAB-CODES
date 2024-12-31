/*4. Delete a word from the given sentence.
week: 7
date:23/10/2024
*/
#include<stdio.h>
void main(){
int i, l, pos, len1=0, len2=0, flag1 = 0, flag2 = 0;
char str[100], word[100];
printf("Enter string: ");
gets(str);
printf("Enter word to be deleted: ");
gets(word);


for(i = 0; str[i]!= '\0'; i++){
len1 += 1;
}
for(i = 0; word[i]!= '\0'; i++){
len2 += 1;
}


for(i = 0; i < len1; i++){
    if(str[i] == word[0] && str[i - 1] == ' '){
        for(l = 0; l < len2; l++){
            if(str[i + l] != word[l]){
                flag1 = 1;
                break;
                }
            }
        if(flag1 == 0 && str[i + l + 1] != ' ')
            pos = i;
        }
    }

for(i = pos; i < len1; i++){
    str[i] = str[i + len2];
    }
puts(str);
}

