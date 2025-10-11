// MA 6th silly sentences for c

#include <stdio.h>
int main(void){

    char Adjective[50];
    char realitives_Name[50];
    char noun_1[50];
    char famous_person[50];
    char animal[50];
    char piece_of_clothing[50];
    char place[50];
    char band[50];
    char Title_of_song[50];
    char noun_2[50];

    printf("Give a ajective-");
    scanf("%49s", Adjective);
    printf("Give a relitives name-");
    scanf("%49s", realitives_Name);
    printf("Give a noun-");
    scanf("%49s", noun_1);
    printf("Give a famous persons name-");
    scanf("%49s", famous_person);
    printf("Give a animal-");
    scanf("%49s", animal);
    printf("Give a piece of clothing-");
    scanf("%49s", piece_of_clothing);
    printf("Give a place-");
    scanf("%49s", place);
    printf("Give a name of a band-");
    scanf("%49s", band);
    printf("Give a made up title of a song-");
    scanf("%49s", Title_of_song);
    printf("Give a noun-");
    scanf("%49s", noun_2);

    printf("Yesterday was %s. I woke up to the noise of %s banging on my %s. When I went to school, I saw %s Walking a %s down the street. I thought I was imagining it. When I got home my mom told me to put on my %s, so we could go to the %s. When we got there, we saw %s preform their new song '%s.' That night I fell fast asleep on my cozy %s.", Adjective, realitives_Name, noun_1, famous_person, animal, piece_of_clothing, place, band, Title_of_song, noun_2);

    return 0;
}