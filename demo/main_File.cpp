// Copyright 2021 B0NKER5 <vladmelnikov1810@yandex.ru>

#include <File.hpp>

int main(int argc, char *argv[]) {
  path path_to_ftp;
  if (argc == 1) {
    path_to_ftp = ".";
  } else {
    path_to_ftp = argv[1];
  }

  File dir(path_to_ftp);

  cout << dir;

  return 0;
}