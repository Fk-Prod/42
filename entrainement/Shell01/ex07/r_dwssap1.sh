#!bin/bash
cat/ect/passwd | grep -v '\#' | sed '1!n;d' | cut -d ; -f1 | rev | sort -r | awk 'NR>= ~["FT_LINE1"] && NR<= ~["FT_LINE2"]' | paste -s -d "," - | sed 's/,/, /g' | sed 's/$/ ./' | tr -d '\n'
