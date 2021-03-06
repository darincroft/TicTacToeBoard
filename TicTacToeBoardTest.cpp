/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

/* EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, sanityCheck)
{
	ASSERT_TRUE(true);
}
*/

TEST(TicTacToeBoardTest, placeOOB)
{
	TicTacToeBoard obj;
	ASSERT_EQ(Invalid, obj.placePiece(4, 4));
}

TEST(TicTacToeBoardTest, placeOverPiece)
{
	TicTacToeBoard obj;
	obj.placePiece(0,0);
	ASSERT_EQ(O, obj.placePiece(2, 2));
}