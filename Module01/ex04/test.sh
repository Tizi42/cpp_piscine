#!/bin/bash

GREEN=$'\e[0;32m'
NC=$'\e[0m'

echo "${GREEN}Make...${NC}"
make
echo ""

echo "${GREEN}Content of file 'test':${NC}"
cat test
echo ""

echo "${GREEN}Replace 'o' by 'X'"${NC}
./replace test o X
echo "${GREEN}Content of file 'test.replace':${NC}"
cat test.replace
echo ""

echo "${GREEN}Run ./replace without arguments:${NC}"
./replace 
echo ""

echo "${GREEN}Run ./replace with a non-existing file:${NC}"
./replace somefile a b
