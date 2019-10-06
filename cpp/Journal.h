#include <string>
#include <bits/stdc++.h>


#ifndef JOURNAL_H
#define JOURNAL_H

class Journal{
  std::string filePath;

public:
  Journal();
  Journal(std::string);
  bool createJournalFile();
  const char* getFilePath();
};


Journal::Journal(){
  filePath = "/tmp/entry.journal";
}

Journal::Journal(std::string fp){
  filePath = fp;
}

bool Journal::createJournalFile(){

  std::fstream file;

  file.open(filePath, std::ios::out);

  if (!file){
    return false;
  }

  // write basic info into file
  char buffer [50];
  file.write("```\n", 4);
  int n = sprintf(buffer, "Title: %s\n", "Raymond Mintz");
  file.write(buffer, n);
  n = sprintf(buffer, "Date: %s\n", "20191009");
  file.write(buffer, n);
  file.write("```\n", 4);
  file.close();
  
  return true;
}

const char* Journal::getFilePath(){
  return filePath.c_str();
}



#endif
