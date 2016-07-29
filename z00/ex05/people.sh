ldapsearch -x uid="z*" | grep cn:| cut  -d : -f  2 >> people.txt
sort -r -d people.txt
rm -rf people.txt
