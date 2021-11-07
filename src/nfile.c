/*
 * nfile.c
 * 
 * Copyright 2021 Sohan Jain <smeee@duck.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include "headers/decs.h"

int
main(int argc, char* argv[]) {
  DIR* dp;

  /* if no path specifed, assume current directory as default */
  if (argc == 1){
    dp = opendir(".");
    printf("%i\n", countFile(dp));
    exit(0);
  }

  for(int i=1; i<argc; i++) {
  
    if ((dp = opendir(argv[i])) == NULL) {
      fprintf(stderr, "Can't open '%s'\n", argv[i]);
      exit(1);
    }
    
    if (argc > 2)
      printf("%s:\n", argv[i]);
    
    printf("%i\n", countFile(dp));

    if (i != (argc-1))
      printf("\n");
  }

  closedir(dp);
  exit(0);
}
