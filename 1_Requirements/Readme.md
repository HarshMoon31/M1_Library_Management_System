## Library Management System

## Introduction

* This library management system is purely developed in C programming language on visual studio code. It enables librarian to use several utilities to track book record and reader's record as well.

## Cost and Features
This library management system is only one side utility to control and keep track of issued books. It enables librarian to save reader's credentials while lending a book along with due dates and as soon as reader returns a book, librarian can update the book record. Librarian can also check for availability of books by just typing book id.

The main features of this system are:
* Add a books
* Delete a particular book
* Search a particular book's record
* View all available books
* Save readers record

## Defining our System

A system is something formed of parts, each of which interacts with the other parts to achieve some common purpose. In case of a library management system, the parts work together to support the management of library information resourses: their acqusition, representation and circulation.

## SWOT ANALYSIS

## Strength
* Easy to handle
* Automated work
## Weakness
* limited features 
* Poor UI design
## Opportunities
* This can be done by adding more features
* Mobile application can be developed
## Threats
User authentication

## 4W and 1H

### WHO:
All librarian can use this utility.

### WHAT:
This system can add a book, delete a book, issue a book, search a record, check availability, update book's record.

### WHEN:
This utility can be used whenever a reader approaches to library.

### WHERE:
This utility can be used in schools, colleges, private libraries and in book stores as well after some modifications.

### HOW:
Reduces manual efforts of librarian by automating library functions such as adding a book, deleting a book, updating a book record, search a book, etc.

## Detail Requirements

### High Level Requirements:

|   ID          | Description              |   Status     |
|---------------|--------------------------|--------------|
| HLR_1         | Add Book                 | Implimented  |
| HLR_2         | View all available books | Implimented  |
| HLR_3         | Search perticular book   | Implimented  |
| HLR_4         | Update status of perticular book | Implimented |
| HLR_5         | Delete a book            | Implimented |

### Low Level Requirements:

| ID           | Discription | status |
| HLR_1, HLR_3, HLR_5 -> LLR_01  | Ask book ID  | Implimented |
| HLR_4 -> LLR_02      | Ask Reader's First Name | Implimented |
| HLR_4 -> LLR_03      | Ask Reader's Last Name  | Implimented |
| HLR_4 -> LLR_04      | Ask Reader's ID         | Implimented |
| HLR_4 -> LLR_05      | Ask Due Date            | Implimented |


