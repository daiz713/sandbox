//
// Created by Daiki Iizuka on 2016/06/10.
//
#include <iostream>
#include <string>
#include <fstream>
#include "DataLoader.h"


int DataLoader::loadCSV () {
  cout << "Good" << endl;
  return 20;
};

void DataLoader::loadText (std::string filePath) {
  std::ifstream ifs(filePath);
  std::string str;
  if (ifs.fail()) {
    // TODO: エラーの詳細調べ方
    cout << "fail" << endl;
    return;
  }
  while (getline(ifs, str)) {
    cout << str << endl;
  }
};

