#!/bin/sh

for i in *.c;
do
  echo "processing $i"
  headerfile=`echo $i | sed 's/.c$/.h/'`
  grep "^\w\+ \w\+(" $i | sed 's/).*/)/;s/ \+/ /g' | sort -u > $headerfile
done

  
