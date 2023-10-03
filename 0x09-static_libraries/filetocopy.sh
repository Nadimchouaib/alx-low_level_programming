#!/bin/bash

# Define the source folders where your files may be located
source_folders=(
  /alx-low_level_programming/
)

# Define the destination folder where you want to copy the files
destination_folder=/alx-low_level_programming/0x09-static_libraries

# List of files to copy
files_to_copy=(
  0-isupper.c
  0-memset.c
  0-strcat.c
  1-isdigit.c
  1-memcpy.c
  1-strncat.c
  100-atoi.c
  2-strchr.c
  2-strlen.c
  2-strncpy.c
  3-islower.c
  3-puts.c
  3-strcmp.c
  3-strspn.c
  4-isalpha.c
  4-strpbrk.c
  5-strstr.c
  6-abs.c
  9-strcpy.c
)

# Iterate over each source folder and find/copy the specified files to the destination folder
for source_folder in "${source_folders[@]}"; do
  for file_to_copy in "${files_to_copy[@]}"; do
    find "$source_folder" -name "$file_to_copy" -exec cp {} "$destination_folder" \;
  done
done

echo "Copy process complete."

