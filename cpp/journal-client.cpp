#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>
#include "Journal.h"

int main(){

  std::string fp = "/tmp/sermon.journal.md";
  Journal journalEntry(fp);

  if (! journalEntry.createJournalFile()){
    printf("Failed to create journal file: %s\n", journalEntry.getFilePath());
  }

  std::cout << fp << std::endl;

}
