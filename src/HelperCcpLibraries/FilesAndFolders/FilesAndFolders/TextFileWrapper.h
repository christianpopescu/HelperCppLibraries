#pragma once
#include <fstream>
#include <vector>

using namespace std;
namespace FilesAndFolders{
	/**
	 * @brief TextFileWrap is an abstract class use as a base hierachy for a "wrappers" of reading or writing text files on C++. 
	 * the purpose is to hide the use of different file streams. 
	*/
	class TextFileWrapper {
	protected:
		fstream fileStream;
	public:
		/**
		 * @brief Configure the file wrapper
		 * @param fileName - the name of the input or output file
		*/
		virtual void ConfigFileWrapper(string fileName) = 0;
	};

}
