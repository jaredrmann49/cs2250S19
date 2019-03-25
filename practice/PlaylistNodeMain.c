/*
 * =====================================================================================
 *
 *       Filename:  PlaylistNodeMain.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/24/2019 03:12:56 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jared Manning (), jaredmanning@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include "PlaylistNode.h"
#include <stdlib.h>
// Constants

PlaylistNode* head;
PlaylistNode* tail;
PlaylistNode* item;

// Function Prototypes
char PrintMenu(char title[]);
void OutputFullPlaylist();
void AddSong();
void RemoveSong();
void TotalSongTime();
void SongsByArtist();
void ResetBuffer();
// Main Function
int main()
{
char PlaylistName[50];
char function;

    printf("Enter playlist's title:\n");
    scanf("%[^\n]", PlaylistName);

do
{
    function = PrintMenu(PlaylistName);
switch(function)
{
case 'a':
    AddSong();
    break;
    case 'r':
   // RemoveSong();
    break;
        case 'c':
    //
    break;
    case 's':
    SongsByArtist();
    break;
    //
      case 't':
    TotalSongTime();
    break;
    //
    case 'o':
    OutputFullPlaylist();
    break;
    //
    case 'q':
    break;
    //
    default:
    printf("Invalid option, try again");
    break;



}





} while(function != 'q');

return 0;
}


// Function Definitions
char PrintMenu(char title[])
{
    char func;
    printf("%s PLAYLIST MENU\n", title);
    printf("a - Add song\n");
    printf("r - Remove song\n");
    printf("c - Change position of song\n");
    printf("s - Output songs by specific artist\n");
    printf("t - Output total time of playlist (in seconds)\n");
    printf("o - Output full playlist\n");
    printf("q - Quit\n\n");
    printf("Choose an option:\n");
    scanf("%s\n", &func);

return func;
}



void OutputFullPlaylist()
{
  PlaylistNode* curr = head;
  if(curr == NULL)
  {
    printf("Playlist is empty\n");
  }
  else
  {
    while(curr != NULL)
    {
      PrintPlaylistNode(curr);
      curr = GetNextPlaylistNode(curr);
    }
  }
}

void AddSong()
{
   
   char ID[50];
   char song[50];
   char artist[50];
   int length;
   printf("ADD SONG\n");
   printf("Enter song's unique ID:\n");
   scanf("%[^\n]", ID);
ResetBuffer();
   printf("Enter song's name:\n");
   scanf("%[^\n]", song);
ResetBuffer();

   printf("Enter artist's name:\n");
   scanf("%[^\n]", artist);
ResetBuffer();

   printf("Enter song's length (in seconds):\n");
   scanf("%d", &length);
   item = (PlaylistNode*)malloc(sizeof(PlaylistNode));
   CreatePlaylistNode(item, ID, song, artist, length, NULL);


    if(head == NULL)
    {
        head = item;
    }
    else
    {
        tail = head;
        while(tail->nextNodePtr != NULL)
        {
            tail = GetNextPlaylistNode(tail);
        }
        InsertPlaylistNodeAfter(tail, item);
    }
}

void RemoveSong()
{
    char ID[50];
    printf("REMOVE SONG\n");
    printf("Enter song's unique ID:\n");
    scanf("%[^\n]", ID);
    PlaylistNode* node = head;
    while(node !=NULL)
    {
       if(strcmp(node->uniqueID, ID)== 0)
        {
            
        }

    }

    printf("\n");

}

void TotalSongTime()
{
    int total = 0;
    PlaylistNode* temp = head;
    while(temp != NULL)
    {
        total += temp->songLength;
        temp = GetNextPlaylistNode(temp);
    }
    printf("OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)\n");
    printf("Total time: %d seconds\n", total);
}
void SongsByArtist()
{
    int count = 1;
    char name[50];
    printf("OUTPUT SONGS BY SPECIFIC ARTIST\n");
    printf("Enter artist's name:\n");
    scanf("%[^\n]", name);
    PlaylistNode* temp = head;
    while(temp != NULL)
    {
        if(strcmp(temp->artistName, name) == 0)
         {
             printf("%d.", count);
             PrintPlaylistNode(temp);
         }
         count++;
    }
}

void ResetBuffer()
{
    fflush(stdin);
    while(((getchar)()) != '\n');
}
