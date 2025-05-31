 // QUE-2 Develop a C program that reads a sentence from the user. Create a function to count the occurrences of each vowel in the sentence and display the counts.

 #include<stdio.h>

 int main() 
 {
    char sentence[100];
    int vowel_count[5] = {0};
    int i;

    printf("Enter a sentence: ");
    gets(sentence);

    for(i=0;sentence[i]!='\0';i++)
    {
        if(sentence[i]=='a' || sentence[i]=='e' || sentence[i]=='i' ||
           sentence[i]=='o' || sentence[i]=='u')
           {
            vowel_count[0]++;
            if(sentence[i]=='a')
            vowel_count[1]++;
            else if(sentence[i]=='e')
            vowel_count[2]++;
            else if(sentence[i]=='i')
            vowel_count[3]++;
            else if(sentence[i]=='o')
            vowel_count[4]++;
            else if (sentence[i]=='u')
            vowel_count[5]++;
           }
    }
        
    printf("Total vowels: %d\n", vowel_count[0]);
    return 0;
    

}            
                  