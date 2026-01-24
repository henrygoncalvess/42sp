id -nGa $FT_USER | tr ' ' ',' | sed 's/,/,/g' | tr -d '\n' | cat -e
