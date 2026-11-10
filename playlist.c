/* Music Playlist Builder in C
Using the abstract data type “Linked List”, you will create a playlist that only needs to move 1 direction. The program must allow for the following

    ● Add songs to the linked list
    ● Remove songs from the playlist
    ● Songs contain an artist, name and year released

In main function, simply call the add to playlist 3 times. Print the playlist. Then call delete on one of the songs and reprint the playlist showing it no longer contains the delete song.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct song
{
    char title[30];
    char artist[50];
    int year;
    struct song *next;
};

int append(struct song **head_song, char new_title[30], char new_artist[50], int new_year)
{
    // setting up new node and last node
    struct song *new_song = (struct song *)malloc(sizeof(struct song));
    struct song *last_song = *head_song;

    // inserting data into the new node
    new_song->year = new_year;

    // string cannot be assigned w/ the = operator, so we use strcpy to copy the string into the new node
    strcpy(new_song->title, new_title);
    strcpy(new_song->artist, new_artist);

    // making sure its the last node in the linked list
    new_song->next = NULL;

    // checking if the linked list is empty and if so, making the new node the head of the linked list
    if (*head_song == NULL)
    {
        *head_song = new_song;
        return 0;
    }

    // going to the last node
    while (last_song->next != NULL)
    {
        last_song = last_song->next;
    }

    // making the new node the last node in the linked list
    last_song->next = new_song;

    return 0;
}

int delete(struct song *head_song, char artist[50], char title[30], int year)
{
    if (head_song == NULL)
    {
        printf("The playlist is empty.\n");
        return 1;
    }

    struct song *current_song = head_song;

    if (current_song != NULL && strcmp(current_song->artist, artist) == 0 && strcmp(current_song->title, title) == 0 && current_song->year == year)
    {
        head_song = current_song->next;
        free(current_song);
        return 0;
    }

    struct song *previous_song = NULL;
    while (current_song != NULL && strcmp(current_song->artist, artist) != 0 && strcmp(current_song->title, title) != 0 && current_song->year != year)
    {
        previous_song = current_song;
        current_song = current_song->next;
    }

    if (current_song == NULL)
    {
        printf("Song not found in the playlist.\n");
        return 1;
    }

    previous_song->next = current_song->next;
    free(current_song);
    return 0;
}

int printList(struct song *head_song)
{
    // checking if the linked list is empty
    if (head_song == NULL)
    {
        printf("The playlist is empty.\n");
        return 1;
    }

    struct song *current_song = head_song;
    while (current_song != NULL)
    {
        printf("Title: %s, Artist: %s, Year: %d\n", current_song->title, current_song->artist, current_song->year);
        current_song = current_song->next;
    }
    return 0;
}

int main(void)
{
    struct song *head_song = NULL;

    append(&head_song, "Song 1", "Artist 1", 2001);
    append(&head_song, "Song 2", "Artist 2", 2002);
    append(&head_song, "Song 3", "Artist 3", 2003);

    printf("Playlist:\n");
    printList(head_song);

    // deleting the second song in the playlist
    struct song *d_song = head_song->next;

    delete(head_song, d_song->artist, d_song->title, d_song->year);

    printf("\nPlaylist after deleting Song 2:\n");
    printList(head_song);

    return 0;
}