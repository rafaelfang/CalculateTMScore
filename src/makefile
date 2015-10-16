calculateTMScore: jsoncpp.o BlastParser.o BlastRecord.o Protein.o HitProtein.o GroundTruthRoot.o Point.o Driver.o
	g++ jsoncpp.o  Protein.o BlastParser.o BlastRecord.o Point.o HitProtein.o GroundTruthRoot.o Driver.o -o calculateTMScore

jsoncpp.o: jsoncpp.cpp
	g++ -c jsoncpp.cpp

BlastParser.o: BlastParser.cpp
	g++ -c BlastParser.cpp
	
BlastRecord.o: BlastRecord.cpp
	g++ -c BlastRecord.cpp
	
Protein.o: Protein.cpp
	g++ -c Protein.cpp
	
Point.o: Point.cpp
	g++ -c Point.cpp

HitProtein.o: HitProtein.cpp
	g++ -c HitProtein.cpp
	
GroundTruthRoot.o: GroundTruthRoot.cpp
	g++ -c GroundTruthRoot.cpp	
	
Driver.o: Driver.cpp
	g++ -c Driver.cpp
	

clean:
	rm *.o calculateTMScore