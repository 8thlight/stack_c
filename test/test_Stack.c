#include "unity.h"
#include "Stack.h"


static Stack* stack;

void setUp(void) {
  stack = Stack_Create(10);
}

void tearDown(void) {
  Stack_Destroy(stack);
}

void test_stack_create(void) {
}

//UnComment as you go, revealing one test at a time.
//Building the Stack as you go

//void test_empty(void) {
//  TEST_ASSERT_TRUE(Stack_isEmpty(stack));
//}
//
//void test_not_empty(void) {
//  Stack_push(stack, 1);
//  TEST_ASSERT_FALSE(Stack_isEmpty(stack));
//}
//
//void test_pop_empty(void) {
//  Stack_push(stack, 1);
//  Stack_pop(stack);
//  TEST_ASSERT_TRUE(Stack_isEmpty(stack));
//}
//
//void test_push_pop_many(void) {
//  Stack_push(stack, 1);
//  Stack_push(stack, 1);
//  Stack_pop(stack);
//  TEST_ASSERT_TRUE(!Stack_isEmpty(stack));
//}
//
//void test_push_value(void) {
//  Stack_push(stack, 21);
//  TEST_ASSERT_EQUAL(21, Stack_top(stack));
//}
//
//void test_push_multiple_values(void) {
//  Stack_push(stack, 21);
//  Stack_push(stack, 28);
//  Stack_push(stack, 12);
//  TEST_ASSERT_EQUAL(12, Stack_top(stack));
//  Stack_pop(stack);
//  TEST_ASSERT_EQUAL(28, Stack_top(stack));
//  Stack_pop(stack);
//  TEST_ASSERT_EQUAL(21, Stack_top(stack));
//  Stack_pop(stack);
//}


// What's next? ...
// Handle Stack Overflow
