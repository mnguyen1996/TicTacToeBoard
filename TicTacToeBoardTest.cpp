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

TEST(TicTacToeBoardTest, checkSanity)
{
  ASSERT_TRUE(true);
}

TEST(TicTacToeBoardTest, checkWinner)
{
  TicTacToeBoard t;
  bool isFalse = false;
  if(t.getWinner() == X || t.getWinner() == 0)
  {
    isFalse = true;
  }
  ASSERT_FALSE(isFalse);
}

TEST(TicTacToeBoardTest, checkPieceBlank)
{
  TicTacToeBoard ttt;
  ASSERT_TRUE(ttt.getPiece(0,0) == Blank);
}

TEST(TicTacToeBoardTest, checkBoard)
{
  TicTacToeBoard ttt;
  bool isTrue = true;
  for (int i = 0; i < BOARDSIZE; i++)
  {
    for (int k = 0; k < BOARDSIZE; k++)
    {
      if(ttt.getPiece(i, k) != Blank)
      {
        isTrue = false;
        break;
      }
    }
  }
}
