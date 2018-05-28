#define CTEST_MAIN

#include <ctest.h>
#include "uheader.h"

char A[10][10];

CTEST(insert_coordinates, PAWN_CORRECT) // a2 a3 
{
	bool result = move(7, 1, 6, 1, A);
	ASSERT_TRUE(result);
}

CTEST(insert_coordinates, PAWN_INCORRECT) // a2 a7
{
	bool result = move(7, 1, 2, 1, A);
	ASSERT_FALSE(result);
}

CTEST(insert_coordinates, ROOK_INCORRECT) // h1 h2
{
	bool result = move(8, 1, 8, 2, A);
	ASSERT_FALSE(result);
}

CTEST(insert_coordinates, KNIGHT_CORRECT) // b1 c3
{
	bool result = move(8, 2, 6, 3, A);
	ASSERT_TRUE(result);
}

CTEST(insert_coordinates, KNIGHT_INCORRECT) // b1 b2
{
	bool result = move(8, 2, 7, 2, A);
	ASSERT_FALSE(result);
}

CTEST(insert_coordinates, BISHOP_INCORRECT) // c1 b2
{
	bool result = move(8, 3, 7, 2, A);
	ASSERT_FALSE(result);
}

CTEST(insert_coordinates, QUEEN_INCORRECT) // d1 c1
{
	bool result = move(8, 4, 8, 3, A);
	ASSERT_FALSE(result);
}

CTEST(insert_coordinates, KING_INCORRECT) // e1 e2
{
	bool result = move(8, 5, 7, 5, A);
	ASSERT_FALSE(result);
}



CTEST(Sintax, InCorrect_Sintax){//a2 d4Pawn
  
  bool result = move(7, 1, 5, 4, A);
    ASSERT_FALSE(result);
}


CTEST(Sintax, InCorrect_SintaxPawn){//a2b2Pawn
  
  bool result = move(7, 1, 7, 2, A);
    ASSERT_FALSE(result);
}


CTEST(Sintax, Correct_Sintax){//b2 b4Pawn
  
  bool result = move(7, 2, 5, 2, A);
    ASSERT_TRUE(result);
}


CTEST(Sintax, Correct_SintaxInput){
  
  bool result = main(A, 7, A, 5, A);
    ASSERT_TRUE(result);
}



int main(int argc, const char** argv)
{
	layout(A);
    return ctest_main(argc, argv);
}
