#!/usr/bin/perl


$filename = $ARGV[0];

open(FILE1,"$filename");

@lines=<FILE1>;
close(FILE1);


$dir="mkdir -p ~cf797/test/Casp11RMSD/";
print $dir."\n";	
system($dir);

foreach $line(@lines) {
	chomp($line);
	#print $line."\n";
	
	$cmd="./calculateTMScore -blaPDB ${line}";
	system($cmd);
	
	
	
	
}
