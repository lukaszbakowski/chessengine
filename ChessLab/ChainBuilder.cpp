#include "ChainBuilder.h"

Direction* ChainBuilder::Build(Direction* buildDirection) {
	
	for (int i = 1; i < 8; i++) {
		
		(* buildDirection)++;
	}
	return buildDirection;
}