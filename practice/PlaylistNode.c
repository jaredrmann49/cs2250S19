/*
 * =====================================================================================
 *
 *       Filename:  PlaylistNode.c
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
#include "PlaylistNode.h"
#include <string.h>
#include <stdlib.h>
void CreatePlaylistNode(PlaylistNode* node, char ID[], char name[],
        char artist[], int length, PlaylistNode* next)
{
    strcpy(node->uniqueID, ID);
    strcpy(node->songName, name);
    strcpy(node->artistName, artist);
    node->songLength = length;
    SetNextPlaylistNode(node, next);
    

}

void InsertPlaylistNodeAfter(PlaylistNode* node, PlaylistNode* next)
{
    node->nextNodePtr = next;
    next->nextNodePtr = NULL;
}
void SetNextPlaylistNode(PlaylistNode* node, PlaylistNode* next)
{
    node->nextNodePtr = next;
}
PlaylistNode* GetNextPlaylistNode(PlaylistNode* node)
{
    return node->nextNodePtr;
}
void PrintPlaylistNode(PlaylistNode* node)
{
    printf("Unique ID: %s\n", node->uniqueID);
    printf("Song Name: %s\n", node->songName);
    printf("Artist Name: %s\n", node->artistName);
    printf("Song Length (in seconds): %d\n", node->songLength);
    printf("\n");
}

