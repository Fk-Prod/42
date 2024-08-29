#:!/bin/bash
cat /etc/passwd | sed '/^/d' | sed -n 'n;p' | cut -d":" -f1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | '\n' ',' | sed 's/.$/./' | sed 's/,/, /g' | tr -d '\n'
