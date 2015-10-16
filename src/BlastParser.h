/*
 * BlastParser.h
 *
 *  Created on: Sep 27, 2015
 *      Author: Chao
 */

#ifndef BLASTPARSER_H_
#define BLASTPARSER_H_

#include "BlastRecord.h"
#include "GroundTruthRoot.h"
#include "HitProtein.h"
#include "Point.h"
#include <string>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <string.h>

#include <fstream>
class BlastParser {
public:
	BlastParser();
	BlastParser(string);
	virtual ~BlastParser();
	void parseFile(string);
	string& getRootName();
	void setRootName(string& rootName);
	vector<BlastRecord>& getBlastRecords();
	void setBlastRecords(vector<BlastRecord>& blastRecords);
	void storeRecords(string);
	void storeCoordinates(string,string,string);
private:
	string rootName;
	vector<BlastRecord> blastRecords;

};

#endif /* BLASTPARSER_H_ */
