cat /etc/passwd | cut -d '#' -f 1 | awk 'NR%2==0' | cut -d: -f 1 | rev | sort -r |awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | tr '\n' ',' | sed "s/,/, /g" | rev | cut -c 2- | rev | sed "s/.$/./" | tr -d '\n'
