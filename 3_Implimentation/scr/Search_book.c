/**
* @file Add_book.c
* @author Harsh Ramesh Moon
* @brief function defination to add a new book
* @version 0.1
* @date 
*
* @copyright Copyright (c) 2021
*
*
*/

#include"library.h"

values view_a_book(int id){
  FILE *fptr;
  fptr = fopen("library_record.txt","rb");
  if(fptr==NULL){
    printf(
