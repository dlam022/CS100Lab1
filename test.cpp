#include "c-echo.h"


#include "gtest/gtest.h"

TEST(EchoTest, Helloworld) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
	EXPECT_EQ("hello world", echo(3, test_val));
}

TEST(EchoTest, EmptyString) {
	char* test_val[1]; test_val[0] = "./c-echo";
	EXPECT_EQ("", echo(1, test_val));
}

TEST(EchoTest, SpecialCharacter) {
	char* test_val[12]; test_val[0] = "./c-echo"; test_val[1] = "!"; test_val[2] = "@"; test_val[3] = "#"; test_val[4] = "$"; test_val[5] = "%"; test_val[6] = "^"; test_val[7] = "&"; test_val[8] = "*"; test_val[9] = "("; test_val[10] = ")"; test_val[11] = "?";
	EXPECT_EQ("!", specialecho(test_val[1]));
	EXPECT_EQ("@", specialecho(test_val[2]));
	EXPECT_EQ("#", specialecho(test_val[3]));
	EXPECT_EQ("$", specialecho(test_val[4]));
	EXPECT_EQ("%", specialecho(test_val[5]));
	EXPECT_EQ("^", specialecho(test_val[6]));
	EXPECT_EQ("&", specialecho(test_val[7]));
	EXPECT_EQ("*", specialecho(test_val[8]));
	EXPECT_EQ("(", specialecho(test_val[9]));
	EXPECT_EQ(")", specialecho(test_val[10]));
	EXPECT_EQ("?", specialecho(test_val[11]));
}

TEST(EchoTest, Numberint) {
	char* test_val[11]; test_val[0] = "./c-echo"; test_val[1] = "0"; test_val[2] = "1"; test_val[3] = "2"; test_val[4] = "3"; test_val[5] = "4"; test_val[6] = "5"; test_val[7] = "6"; test_val[8] = "7"; test_val[9] = "8"; test_val[10] = "9";
	EXPECT_EQ("0", numberecho(test_val[1]));
	EXPECT_EQ("1", numberecho(test_val[2]));
	EXPECT_EQ("2", numberecho(test_val[3]));
	EXPECT_EQ("3", numberecho(test_val[4]));
	EXPECT_EQ("4", numberecho(test_val[5]));
	EXPECT_EQ("5", numberecho(test_val[6]));
	EXPECT_EQ("6", numberecho(test_val[7]));
	EXPECT_EQ("7", numberecho(test_val[8]));
	EXPECT_EQ("8", numberecho(test_val[9]));
	EXPECT_EQ("9", numberecho(test_val[10]));
}

TEST(EchoTest, Uppercase) {
	char* test_val[27]; test_val[0] = "./c-echo"; test_val[1] = "A"; test_val[2] = "B"; test_val[3] = "C"; test_val[4] = "D"; test_val[5] = "E"; test_val[6] = "F"; test_val[7] = "G"; test_val[8] = "H"; test_val[9] = "I"; test_val[10] = "J"; test_val[11] = "K"; test_val[12] = "L"; test_val[13] = "M"; test_val[14] = "N"; test_val[15] = "O"; test_val[16] = "P"; test_val[17] = "Q"; test_val[18] = "R"; test_val[19] = "S"; test_val[20] = "T"; test_val[21] = "U"; test_val[22] = "V"; test_val[23] = "W"; test_val[24] = "X"; test_val[25] = "Y"; test_val[26] = "Z";
	ASSERT_EQ("A", upperecho(test_val[1]));
	ASSERT_EQ("B", upperecho(test_val[2]));
	ASSERT_EQ("C", upperecho(test_val[3]));
	ASSERT_EQ("D", upperecho(test_val[4]));
	ASSERT_EQ("E", upperecho(test_val[5]));
	ASSERT_EQ("F", upperecho(test_val[6]));
	ASSERT_EQ("G", upperecho(test_val[7]));
	ASSERT_EQ("H", upperecho(test_val[8]));
	ASSERT_EQ("I", upperecho(test_val[9]));
	ASSERT_EQ("J", upperecho(test_val[10]));
	ASSERT_EQ("K", upperecho(test_val[11]));
	ASSERT_EQ("L", upperecho(test_val[12]));
	ASSERT_EQ("M", upperecho(test_val[13]));
	ASSERT_EQ("N", upperecho(test_val[14]));
	ASSERT_EQ("O", upperecho(test_val[15]));
	EXPECT_EQ("P", upperecho(test_val[16]));
	EXPECT_EQ("Q", upperecho(test_val[17]));
	EXPECT_EQ("R", upperecho(test_val[18]));
	EXPECT_EQ("S", upperecho(test_val[19]));
	EXPECT_EQ("T", upperecho(test_val[20]));
	EXPECT_EQ("U", upperecho(test_val[21]));
	EXPECT_EQ("V", upperecho(test_val[22]));
	EXPECT_EQ("W", upperecho(test_val[23]));
	EXPECT_EQ("X", upperecho(test_val[24]));
	EXPECT_EQ("Y", upperecho(test_val[25]));
	EXPECT_EQ("Z", upperecho(test_val[26]));
}


/*TEST(EchoTest, Codingisfun) {
	char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "coding"; test_val[2] = "is"; test_val[3] = "fun";
	EXPECT_EQ("coding is fun", echo(4, test_val));
}
*/


int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
