#include "greatest-master/greatest.h"
#include "zadanie.h"

//good tests

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

TEST string_is_good_2_3(void){
	int x = isAccepted("baaaaabbba");
	ASSERT_EQ(1, x);
	PASS();
}

TEST string_is_good_3(void){
	int x = isAccepted("baaaaabbba");
	ASSERT_EQ(1, x);
	PASS();
}

TEST string_is_good_4(void){
	int x = isAccepted("babbba");
	ASSERT_EQ(1, x);
	PASS();
}

TEST string_is_good_5(void){
	int x = isAccepted("baaaaaaaaaa");
	ASSERT_EQ(1, x);
	PASS();
}

TEST string_is_good_6(void){
	int x = isAccepted("abaaaaaaaaaabbaa");
	ASSERT_EQ(1, x);
	PASS();
}



// bad tests

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

TEST string_is_bad_1_3(void){
	int x = isAccepted("aa");
	ASSERT_EQ(-1, x);
	PASS();
}

TEST string_is_bad_3(void){
	int x = isAccepted("abc");
	ASSERT_EQ(-1, x);
	PASS();
}

TEST string_is_bad_4(void){
	int x = isAccepted("aaaab");
	ASSERT_EQ(-1, x);
	PASS();
}

TEST string_is_bad_5(void){
	int x = isAccepted("abb");
	ASSERT_EQ(-1, x);
	PASS();
}

TEST string_is_bad_6(void){
	int x = isAccepted("ac");
	ASSERT_EQ(-1, x);
	PASS();
}



GREATEST_MAIN_DEFS();

int main(int argc, char **argv) {
	GREATEST_MAIN_BEGIN(); //Start testing

	RUN_TEST(string_is_good_1_1); //RUN GOOD TEST
    RUN_TEST(string_is_good_1_2);
    RUN_TEST(string_is_good_2_1);
    RUN_TEST(string_is_good_2_2);
	RUN_TEST(string_is_good_2_3);
    RUN_TEST(string_is_good_1_3);
	RUN_TEST(string_is_good_3);
	RUN_TEST(string_is_good_4);
	RUN_TEST(string_is_good_5);
	RUN_TEST(string_is_good_6);


	RUN_TEST(string_is_bad_1_1); //RUN BAD TEST
    RUN_TEST(string_is_bad_1_2);
    RUN_TEST(string_is_bad_2_1);
    RUN_TEST(string_is_bad_2_2);
    RUN_TEST(string_is_bad_2_3);
	RUN_TEST(string_is_bad_1_3);
	RUN_TEST(string_is_bad_3);
	RUN_TEST(string_is_bad_4);
	RUN_TEST(string_is_bad_5);
	RUN_TEST(string_is_bad_6);


	GREATEST_MAIN_END(); //End testing
}
