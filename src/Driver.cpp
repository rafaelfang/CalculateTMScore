//============================================================================
// Name        : CalculateTMScore.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <cstring>
#include <iostream>
#include <string>
#include <vector>

#include "BlastParser.h"
#include "BlastRecord.h"
#include "GroundTruthRoot.h"
#include "HitProtein.h"

using namespace std;

int main(int argc, char* argv[]) {
	if (argc != 3) {
		cout << "the input should like this:" << endl;
		cout << "<excutable> <type> <rootName>" << endl;
		return 0;
	}
	if (strcmp(argv[1], "-blaPDB") == 0) {


		string querySeqLocation("/home/cf797/test/casp11Seq/");
		string alignmentResultLocation("/home/cf797/test/casp11Alignment/");
		string experimentLocation("/home/cf797/test/casp11OutputResultFolder/");
		string proteinDatabaseLocation("/home/lihongb/DATABASE/DBInfo/");
		BlastParser blastParser(argv[2]);
		blastParser.parseFile(alignmentResultLocation);
		blastParser.storeRecords(experimentLocation);
		blastParser.storeCoordinates(querySeqLocation,proteinDatabaseLocation,experimentLocation);


	}

	return 0;
}
