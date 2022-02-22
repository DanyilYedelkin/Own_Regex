#include "greatest-master/greatest.h"
#include "zadanie.h"

TEST string_is_good_1_1(void){
	int x = isAccepted("ababbba");
	ASSERT_EQ(1, x);
	PASS();
}

TEST string_is_good_1_2(void){
	int x = isAccepted("abaaaa");
	ASSERT_EQ(1, x);
	PASS();
}

TEST string_is_good_1_3(void){
	int x = isAccepted("aba");
	ASSERT_EQ(1, x);
	PASS();
}

TEST string_is_good_2_1(void){
	int x = isAccepted("babbbbaa");
	ASSERT_EQ(1, x);
	PASS();
}

TEST string_is_good_2_2(void){
	int x = isAccepted("baaaaa");
	ASSERT_EQ(1, x);
	PASS();
}

TEST string_is_bad_1_1(void){
	int x = isAccepted("ababbbc");
	ASSERT_EQ(-1, x);
	PASS();
}

TEST string_is_bad_1_2(void){
	int x = isAccepted("a");
	ASSERT_EQ(-1, x);
	PASS();
}

TEST string_is_bad_2_1(void){
	int x = isAccepted("babbaaf");
	ASSERT_EQ(-1, x);
	PASS();
}

TEST string_is_bad_2_2(void){
	int x = isAccepted("ba  s");
	ASSERT_EQ(-1, x);
	PASS();
}

TEST string_is_bad_2_3(void){
	int x = isAccepted("ab");
	ASSERT_EQ(-1, x);
	PASS();
}



GREATEST_MAIN_DEFS();

int main(int argc, char **argv) {
	GREATEST_MAIN_BEGIN(); //Start testing

	RUN_TEST(string_is_good_1_1); //RUN TEST
    RUN_TEST(string_is_good_1_2);
    RUN_TEST(string_is_good_2_1);
    RUN_TEST(string_is_good_2_2);
    RUN_TEST(string_is_good_1_3);


	RUN_TEST(string_is_bad_1_1); //RUN TEST
    RUN_TEST(string_is_bad_1_2);
    RUN_TEST(string_is_bad_2_1);
    RUN_TEST(string_is_bad_2_2);
    RUN_TEST(string_is_bad_2_3);


	GREATEST_MAIN_END(); //End testing
}
