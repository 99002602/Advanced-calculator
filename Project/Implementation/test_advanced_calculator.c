#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <advanced_calculator.h>
#define PROJECT_NAME    "Advanced Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_modulo(void);
void test_factorial(void);
void test_power(void);
void test_antilog(void);
void test_base10log(void);
void test_naturallog(void);
void test_modulus(void);
void test_inverse(void);
void test_root(void);
void test_square(void);
void test_cube(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "modulo", test_modulo);
  CU_add_test(suite, "factorial", test_factorial);
  CU_add_test(suite, "power", test_power);
  CU_add_test(suite, "antilog", test_antilog);
  CU_add_test(suite, "base10log", test_base10log);
  CU_add_test(suite, "naturallog", test_naturallog);
  CU_add_test(suite, "modulus", test_modulus);
  CU_add_test(suite, "inverse", test_inverse);
  CU_add_test(suite, "root", test_root);
  CU_add_test(suite, "square", test_square);
  CU_add_test(suite, "cube", test_cube);

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(30 == add(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == subtract(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}

void test_modulo(void) {
  CU_ASSERT(0 == modulo(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == modulo(2, 2));
}

void test_factorial(void) {
  CU_ASSERT(1 == factorial(0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == factorial(2));
}

void test_power(void) {
  CU_ASSERT(9 == power(3, 2));
  
  /* Dummy fail*/
  CU_ASSERT(21 == power(4, 3));
}

void test_antilog(void) {
  CU_ASSERT(100 == antilog(2));
  
  /* Dummy fail*/
  CU_ASSERT(1000 == antilog(1));
}

void test_base10log(void) {
  CU_ASSERT(1 == base10log(10));
  
  /* Dummy fail*/
  CU_ASSERT(4 == base10log(1));
}

void test_naturallog(void) {
  CU_ASSERT(0 == naturallog(1));
  
  /* Dummy fail*/
  CU_ASSERT(10 == naturallog(2));
}

void test_modulus(void) {
  CU_ASSERT(5 == modulus(-5));
  
  /* Dummy fail*/
  CU_ASSERT(-3 == modulus(4));
}

void test_inverse(void) {
  CU_ASSERT(1 == inverse(1));
  
  /* Dummy fail*/
  CU_ASSERT(5 == inverse(0));
}

void test_root(void) {
  CU_ASSERT(3 == root(9));
  
  /* Dummy fail*/
  CU_ASSERT(2 == root(-4));
}

void test_square(void) {
  CU_ASSERT(49 == square(7));
  
  /* Dummy fail*/
  CU_ASSERT(-81 == root(-9));
}

void test_cube(void) {
  CU_ASSERT(64 == cube(4));
  
  /* Dummy fail*/
  CU_ASSERT(27 == cube(-3));
}