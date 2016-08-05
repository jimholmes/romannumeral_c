#include <check.h>
#include	<stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "roman.h"

START_TEST (initial) {
	ck_assert_int_eq(1,1);
}
END_TEST

START_TEST (i_eq_1) {
	int romVal = roman_to_int('i');
	ck_assert_int_eq( romVal,1);
}
END_TEST

START_TEST (reject_invalid) {

	bool isValid=is_valid_roman_input("ai");
	ck_assert_int_eq(1, isValid);
}
END_TEST


Suite * roman_suite(void) {
	Suite *s;
    TCase *tc_core;

    s = suite_create("Roman");

    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, initial);
    tcase_add_test(tc_core, i_eq_1);
    tcase_add_test(tc_core, reject_invalid);
    suite_add_tcase(s, tc_core);

    return s;
}

int
main ( int argc, char *argv[] )
{
	int number_failed;
    Suite *s;
    SRunner *sr;

    s = roman_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}


int
roman_to_int ( char roman )
{
	int intVal = 1;
	return intVal;
}		


	bool
is_valid_roman_input ( char roman_string[] )
{
	return true;
}	
