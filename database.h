//************************************************
// Purpose: Define interface for a database
// Author: Micah Gordon
// Date: 2024.11.24

//#include <stdint.h>
#include "table.h"

#define databaseT void *

static databaseT InitDatabase();

static databaseT DestroyDatabase();

static uint32_t AddTable();

