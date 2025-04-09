#!/usr/bin/env bash

SOURCE_FILES=$(ls *.c)
for SOUECE_FILE in $SOURCE_FILES; do
  STEM_NAME=${SOUECE_FILE%.*}
  BIN="${STEM_NAME}.elf"
  COMPILE_LOG="${STEM_NAME}.compile.log"
  EXECUTE_LOG="${STEM_NAME}.execute.log"
  gcc -Wall -g -fsanitize=address -o "${BIN}" "${SOUECE_FILE}" 2> "${COMPILE_LOG}"
  "./${BIN}" 2> "${EXECUTE_LOG}"
done
