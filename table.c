//************************************************
// Filename: table.c
// Purpose: Define interface for a table
// Author: Micah Gordon
// Date: 2024.11.23

#include <stdint.h>
#include <string.h>
#include <stdlib.h>

#include "table.h" 

#define MAX_NAME_LENGTH 128

typedef struct 
{
    uint64_t tableId;
    char m_name[MAX_NAME_LENGTH];
    uint16_t m_colCount;
}table_t;

//***********************************************
// See and update header file for documentation
tableT InitTable(char * name, uint8_t nameLen)
{
    table_t * newTable = NULL;

    if (nameLen < MAX_NAME_LENGTH)
    {
        newTable = (table_t*)malloc(sizeof(table_t));
    }

    return newTable;
}

//***********************************************
// See and update header file for documentation
tableT DestroyTable(tableT ptable)
{
    table_t * table = (table_t*) ptable;

    return NULL;
}

//***********************************************
// See and update header file for documentation
tableT DeleteTable(tableT ptable)
{
    table_t * table = (table_t*) ptable;
    return NULL;
}
