/*
this program opens and reads a file line by line while writing line by line to a second file
file names are to be indicated as command line arguments
*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

#define FILE_PATH "."

int main(int argc, char* argv[]){
	if(argc!=3){
		cout<<"\nUsage is reading from one file to write to another\ne.g. myCopier file1.txt file2.txt"<<endl;
	}
	
	string path = FILE_PATH;
	string fileRD = argv[1];
	string fileWR = argv[2];
	string pathIn = path+"/"+fileRD;
	string pathOut = path+"/"+fileWR;

	cout<<"\nStarting Copying Process...\nThe current file path is: "<<FILE_PATH<<endl;
	cout<<"Name of file reading from: "<<pathIn<<endl;
	cout<<"Name of file writing to: "<<pathOut<<endl;
	
	cout<<"to check that this program works, run ./clear_file2 in between runs\nand checking that the file is empty before and filled after."<<endl;
	
	fstream fIn, fOut;
	fIn.open(pathIn, fstream::in);
	fOut.open(pathOut, fstream::out);

	string line;
	while(getline(fIn, line)){
		fOut<<line<<endl;
	}
	fIn.close();
	fOut.close();

	return 0;
	
}
