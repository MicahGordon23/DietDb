//************************************************
// Filename: table.h
// Purpose: Define interface for a table
// Author: Micah Gordon
// Date: 2024.11.23

#include <stdint.h>

#define tableT void *

//*********************************************
// Purpose: Create a new table. Intializes the name of the table to passed
//              character array.
// Returns:
//     On Success: Pointer to a table struct.
//     On Failure: Null
// Author: Micah Gorodon
// Date: 2024.11.23
// Edits:
//*********************************************
tableT initTable(char * name, uint8_t nameLen);

//*********************************************
// Purpose: Clean up all resources allocated to the table.
//          This includes any open columns or queries.
//
// Author: Micah Gordon
// Date: 2024.11.23
// Edits:
//*********************************************
tableT destroyTable(tableT table);

//*********************************************
// Purpose:
// Returns:
// Author:
// Date: 2024.11.23
// Edits:
//*********************************************
tableT deleteTable(tableT table);

