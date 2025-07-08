#ifndef _STACK_DS_USER
#define _STACK_DS_USER

#include "std_types.h"

#define MAX_WIDTH 5

typedef enum return_stack_status{
    RTEURN_STACK_NOT_FULL,
    RTEURN_STACK_FULL,
    RTEURN_STACK_Empty
}return_stack_status_t;

typedef struct stack_ds{
    int top;
    int data[MAX_WIDTH];
}stack_ds_t;

return_status_t StackInitialize(stack_ds_t *my_stack);
return_status_t StackPush(stack_ds_t *my_stack, uint32_t value);
return_status_t StackPop(stack_ds_t *my_stack, uint32_t *value);
return_status_t StackTop(stack_ds_t *my_stack, uint32_t *value);
return_status_t StackSize(stack_ds_t *my_stack, uint32_t *value);
return_status_t StackDisplay(stack_ds_t *my_stack);

#endif // _STACK_DS_USER
